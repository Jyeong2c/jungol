//지그 재그 교수님
#include <stdio.h>

int main()
{
    int i, j, n, cnt = 1;
    int x = 0, y = 0, d = 0;
    int k[100][100];

    do {
        scanf("%d", &n);
    } while (n < 1 || n > 100);

    for (j = 0; j < n; j++) {
        for (i = 0; i < n; i++) {
            if (d == 0) {
                k[x][y] = cnt++;
                if ((y + 1) < n) {
                    y++;
                    d++;
                }
                else goto end;
            }
            else if (d == 1) {
                k[x][y] = cnt++;
                if ((x + 1) < n) {
                    x++;
                    y--;
                }
                else goto end;

                if ((x + 1) == n) {
                    if (y + 1 == n) y++;
                    //k[x][y] = cnt++;
                    d++;
                }
                else  if ((y) <= 0) {
                    d++;
                }
            }
            else if (d == 2) {
                k[x][y] = cnt++;
                if ((x + 1) < n) {
                    x++;
                    d++;
                }
                else if ((x + 1) == n) {
                    y++;
                    d++;
                }
                else {
                    y++;
                    k[x][y] = cnt++;
                    goto end;
                }
            }
            else if (d == 3) {
                k[x][y] = cnt++;
                if (((y + 1) < n) && (x - 1) >= 0) {
                    x--;
                    y++;
                }
                else if ((y + 1) == n) {
                    x++;
                    d = 1;
                }
                else if (x == 0) {
                    if ((y + 1) == n) x++;
                    else y++;
                    d = 1;
                }
                else if ((x + 1) == n) {
                    y++;
                }
                else goto end;
            }
        }
    }

end:
    for (j = 0; j < n; j++, d++) {
        for (i = 0; i < n; i++) {
            printf("%d ", k[i][j]);
        }
        printf("\n");
    }

    return 0;
}