#include <iostream>
#include "minmax.h"
using namespace std;

int main(int argc, char **argv)
{
	int size = argc - 1;
	int *arr;
	int min_val, max_val;
	
	if (argc == 1) return 0;

	arr = new int[size];
	for (int i = 0; i < size; i++)
		arr[i] = stoi(argv[i + 1]);
	getMinMax(arr, size, min_val, max_val);
	cout << "min: " << min_val << endl;
	cout << "max: " << max_val << endl;
	delete[] arr;
	return 0;
}
