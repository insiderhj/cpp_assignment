#include <iostream>
#include <string>
using namespace std;

void magicSquare(int** arr, int size)
{
	int col = size / 2, row = 0;
	for (int count = 1; count <= size * size; count++) {
		if (row < 0)
			row += size;
		if (row >= size)
			row -= size;
		if (col >= size)
			col -= size;

		arr[row][col] = count;
		
		if (count % size == 0)
			row++;
		else {
			row--;
			col++;
		}
	}
}

int main(int argc, char **argv)
{
	string str;
	int num;
	int** arr;
	
	if (argc != 2) return 0;
	str = argv[1];
	num = stoi(str);
	if (num % 2 == 0 || num < 3) return 0;
	
	arr = new int*[num];
	for (int i = 0; i < num; i++)
		arr[i] = new int[num];

	magicSquare(arr, num);
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			cout << arr[i][j];
			if (j < num - 1)
				cout << ' ';
		}
		cout << endl;
	}

	for (int i = 0; i < num; i++)
		delete[] arr[i];
	delete[] arr;
	return 0;
}
