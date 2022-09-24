#include <iostream>
using namespace std;

void swapInt(int& a, int& b)
{
	int c = a;
	a = b;
	b = c;
}

void bubbleSort(int *arr, int size)
{
	for (int i = size - 1; i >= 0; i--)
		for (int j = 0; j < i; j++)
			if (arr[j] > arr[j + 1])
				swapInt(arr[j], arr[j + 1]);
}

int main()
{
	int size;
	int *arr;
	cin >> size;
	if (size <= 0)
		return 0;
	arr = new int[size];
	for (int i = 0; i < size; i++)
		cin >> arr[i];
	bubbleSort(arr, size);
	for (int i = 0; i < size; i++) {
		cout << arr[i];
		if (i < size - 1)
			cout << ' ';
	}
	cout << endl;
	delete[] arr;
	return 0;
}
