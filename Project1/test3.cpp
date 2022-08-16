#include<stdio.h>

int main()
{
	int a ;
	int i;
	scanf_s("%d", &a);
	if (a <= 10)
	{
		for (i = 1; i <= a; i++)
			printf("JUNGOL\n");
	}
	return 0;
}