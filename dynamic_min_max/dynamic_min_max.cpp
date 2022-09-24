#include <iostream>
using namespace std;

int main()
{
	int size;
	int *arr;
	int min_val, max_val;

	cin >> size;
	arr = new int[size];
	for (int i = 0; i < size; i++)
		cin >> arr[i];
	min_val = arr[0];
	max_val = arr[0];
	for (int i = 1; i < size; i++) {
		if (min_val > arr[i]) min_val = arr[i];
		if (max_val < arr[i]) max_val = arr[i];
	}
	cout << "min: " << min_val << endl;
	cout << "max: " << max_val << endl;
	delete[] arr;
	return 0;
}
