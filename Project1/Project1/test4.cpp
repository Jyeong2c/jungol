#include<stdio.h>
int main()
{
    int a, i, sum = 0, avg = 0;
    for (i = 1; i < 21; i++)
    {
        scanf_s("%d", &a);
        if (a == 0)
            break;
        sum += a;
        avg = sum / i;
    }
    printf("%d\n", i);

    printf("%d %d", sum, avg);
    return 0;
}