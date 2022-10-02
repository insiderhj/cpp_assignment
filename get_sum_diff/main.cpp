#include <stdio.h>
#include <iostream>
#include "sumdiff.h"
using namespace std;

int main(int argc, char **argv)
{
	int a, b, sum, diff;
	
	if (argc != 3) return 0;
	a = stoi(argv[1]);
	b = stoi(argv[2]);
	getSumDiff(a, b, sum, diff);
	printf("sum:%d\ndiff:%d\n", sum, diff);
	return 0;
}
