#include <iostream>
using namespace std;

void swapInt(int& n1, int& n2)
{
	int n3 = n1;
	n1 = n2;
	n2 = n3;
}

void swapString(std::string& s1, std::string& s2)
{
	string s3 = s1;
	s1 = s2;
	s2 = s3;
}

int main(int argc, char **argv)
{
	int n1, n2;
	string s1, s2;
	
	if (argc != 5) return 0;
	n1 = stoi(argv[1]);
	n2 = stoi(argv[2]);
	s1 = argv[3];
	s2 = argv[4];
	cout << "n1: " << n1 << ", n2: " << n2 << ", s1: " << s1 << ", s2: " << s2 << endl;
	swapInt(n1, n2);
	swapString(s1, s2);
	cout << "n1: " << n1 << ", n2: " << n2 << ", s1: " << s1 << ", s2: " << s2 << endl;
	return 0;
}
