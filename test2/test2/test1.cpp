#include<stdio.h>

int main()
{
	int n,a,m;
	int sum, k;
	scanf_s("%d", &n);
	printf("%d\n", n);

	if (n >= 1 && n <= 40)
	{
		for (int i = 0; i < n; i++)
		{
			scanf_s("%d", &a);
			printf("%d\n", a);
			scanf_s("%d", &m);
			if (m >= 1 && m <= 100)
			{
				sum += (m / n);
				printf("%d\n", sum);
			}
		}

		
		
	}
	

	return 0;
}