#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i, j;
	int t = 5;
	for (i = 1; i <= t; i++)
	{
		for (j = 1; j <= t - i; j++)
		{
			printf(" ");
		}
		for (j = t- i + 1; j<t+ i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 4; i >= 1; i--)
	{
		for (j = 1; j <= (t - i); j++)
		{
			printf(" ");
		}
		for (j = t - i + 1; j<t + i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}