#include<stdio.h>

int main()
{
	for (int i = 2; i < 7; i++)
	{
		for (int j = i ; j< i+5; j++)
		{
			printf("%d ", j);

		}
		printf("\n");

	}

		return 0;
}