void getMinMax(int *arr, int len, int& min, int& max)
{
	min = arr[0];
	max = arr[0];
	for (int i = 1; i < len; i++) {
		if (min > arr[i]) min = arr[i];
		if (max < arr[i]) max = arr[i];
	}
}
