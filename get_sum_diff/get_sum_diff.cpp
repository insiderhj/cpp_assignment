#include <stdio.h>

void getSumDiff(int a, int b, int& sum, int& diff)
{
	sum = a + b;
	diff = a - b;
}

int main(void)
{
	int a, b, sum, diff;
	scanf("%d %d", &a, &b);
	getSumDiff(a, b, sum, diff);
	printf("sum:%d\ndiff:%d\n", sum, diff);
	return 0;
}
