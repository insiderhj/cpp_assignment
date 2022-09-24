#include <iostream>
using namespace std;

int main()
{
	int size;
	int *arr;

	cin >> size;
	arr = new int[size];
	for (int i = 0; i < size; i++)
		arr[i] = i;
	for (int i = 0; i < size; i++) {
		cout << arr[i];
		if (i < size - 1) cout << ' ';
	}
	cout << endl;
	delete[] arr;
	return 0;
}
