#include <iostream>
#include <utility>
using namespace std;

int main(int argc, char **argv)
{
	int size = argc / 2;
	pair<string, double>* people;
	double d;
	
	people = new pair<string, double>[size];
	for (int i = 0; i < size; i++) 
		people[i] = make_pair(argv[i * 2 + 1], stod(argv[i * 2 + 2]));
	for (int i = 0; i < size; i++)
		cout << "Name:" << people[i].first << ", Score:" << people[i].second << endl;
	delete[] people;
	return 0;
}
