#include<stdio.h>

int main()
{
	int a, b = 0, c = 0;
	int even = 0, odd = 0;
	while (1)
	{
		scanf("%d", &a);

		even = (a % 2 == 0);
		odd = (a % 2 != 0);
		if (a == 0)
		{
			printf("odd : %d\neven : %d", b, c);
			break;
		}

		if (even)
		{
			c += even;
		}
		if (odd)
		{
			b += odd;
		}


	}


	return 0;
}