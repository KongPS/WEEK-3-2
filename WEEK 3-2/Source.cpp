#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a, b, c, d;
	int sum = 0;
	scanf("%d%d%d%d", &a, &b, &c, &d);

	if (a % 10 == 2 || a % 10 == 4 || a % 10 == 6 || a % 10 == 8 || a % 10 == 0)
	{
		sum++;
	}
	if (b % 10 == 2 || b % 10 == 4 || b % 10 == 6 || b % 10 == 8 || b % 10 == 0)
	{
		sum++;
	}
	if (c % 10 == 2 || c % 10 == 4 || c % 10 == 6 || c % 10 == 8 || c % 10 == 0)
	{
		sum++;
	}
	if (d % 10 == 2 || d % 10 == 4 || d % 10 == 6 || d % 10 == 8 || d % 10 == 0)
	{
		sum++;
	}
	printf("%d", sum);
}