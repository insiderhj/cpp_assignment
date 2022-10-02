#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
	if (argc != 3) return 0;
	
	string num_str = argv[2];
	int num = stoi(num_str);
	for (int i = 0; i < num; i++)
		cout << argv[1] << endl;
	return 0;
}
