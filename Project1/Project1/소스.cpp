#include<stdio.h>

int main()
{
	int n , m;
	scanf("%d %d", &n, &m);
	int tmp = n;		//m==2�� �� n�� �ǵ帮�� �ʱ� ���� tmp�� ���� ���� ����

	if((n<101 && n>0)&&(m>0&&m<4)){
		if  (m == 1) {
			for (int i = 1; i <= n; i++) {
				for (int j = 1; j <= i; j++)
					printf("*");
				printf("\n");
			}
		}
		if  (m == 2) {
			for (int i = 1; i <= n; i++) {			// n--�ϸ� ù��° for���� ������ ����
				for (int j = tmp; j > 0; j--)
					//	for (int j = n-i; j>0 ; j--)
	
					printf("*");
				printf("\n");
				tmp--;
			}
		}
		if (m == 3) {
			for (int i = 0; i < n; i++)
			{
				for (int j = i; j < n - 1; j++)
				{
					printf(" ");
				}
				for (int j = 0; j <= i * 2; j++)
				{
					printf("*");
				}
				printf("\n");
	
			}
		}
	}
	else
		printf("INPUT ERROR!");
	return 0;
}

//#include<stdio.h>
//
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//	int tmp = n;		//m==2�� �� n�� �ǵ帮�� �ʱ� ���� tmp�� ���� ���� ����
//
//	if (n < 101) {
//		if ((n < 101) && (m == 1)) {
//			for (int i = 1; i <= n; i++) {
//				for (int j = 1; j <= i; j++)
//					printf("*");
//				printf("\n");
//			}
//		}
//		if ((n < 101) && (m == 2)) {
//			for (int i = 1; i <= n; i++) {			// n--�ϸ� ù��° for���� ������ ����
//				for (int j = tmp; j > 0; j--)
//					//	for (int j = n-i; j>0 ; j--)
//
//					printf("*");
//				printf("\n");
//				tmp--;
//			}
//		}
//		if ((n < 101) && (m == 3)) {
//			for (int i = 0; i < n; i++)
//			{
//				for (int j = i; j < n - 1; j++)
//				{
//					printf(" ");
//				}
//				for (int j = 0; j <= i * 2; j++)
//				{
//					printf("*");
//				}
//				printf("\n");
//
//			}
//		}
//	}
//	else
//		printf("INPUT ERROR!");
//	return 0;
//}