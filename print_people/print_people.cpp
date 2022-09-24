#include <iostream>
#include <utility>
using namespace std;

int main()
{
	int size;
	pair<string, int>* people;
	
	cin >> size;
	people = new pair<string, int>[size];
	for (int i = 0; i < size; i++)
		cin >> people[i].first >> people[i].second;
	for (int i = 0; i < size; i++)
		cout << "Name:" << people[i].first << ", Age:" << people[i].second << endl;
	delete[] people;
	return 0;
}
