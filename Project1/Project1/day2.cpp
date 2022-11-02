#include<stdio.h>

int main()
{
	int n, a, m;
	int sum = 0;
	scanf_s("%d", &n);
	//printf("%d\n", n);

	if ((n >= 1 && n <= 40) || (m >= 1 && m <= 100))
	{
		for (int i = 0; i < n; i++)
		{
			scanf_s("%d", &a);
			//printf("%d\n", a);
			scanf_s("%d", &m);
			
			printf("%d\n", sum);
			
		}

	}


	return 0;
}