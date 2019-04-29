#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 7; i++)
	{
		for (j = 0; j <2 * i + 1; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for (i = 6; i>0; i--)
	{
		for (j = 2 * i - 1; j >0; j--)
		{
			printf("* ");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}