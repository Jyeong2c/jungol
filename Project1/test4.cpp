#include<stdio.h>

int main()
{
	int a,i;
	int sum =0,avg=0;

	

	for (i = 1; i <= 20; i++ ){
		scanf("%d", &a);

		sum += a;
	
		if (a == 0){
		break;	
		}
	}
	i--;
	avg = (sum / i);
	printf("%d %d\n", sum, avg);
	return 0;
}