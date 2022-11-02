#include<stdio.h>
#define EMPTY -1

int start_x = 0;
int start_y = 0;
int main()
{
    int map[100][100];
    int n;
    scanf_s("%d", &n);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            map[i][j] = EMPTY;              // 경계값 만듬
        }

    int next = 0;               //방향 설정을 위한 함수
    int end = 0;                //방향 설정이 끝나면 while문 나가기 위한 것
    int num = 0;                //
    bool lock = false;
    while (1)
    {
        //if (lock == false)
        map[start_x][start_y] = (num) % 10;       //0~9 표시

        end = 0;
        if (next == 0)
        {
            if (map[start_x + 1][start_y] == EMPTY)             //아래 한칸
            {
                start_x++;
                num++;
                map[start_x][start_y] = (num) % 10;       //0~9 표시
                if (map[start_x - 1][start_y + 1] == EMPTY)             //오른쪽 대각선
                {
                    start_x--;
                    start_y++;
                    num++;
                }
            }
            else
            {
                next++;             //대각선이 끝나면 next ==1으로
                end++;              //end 증가 (ciy=count 역할) 대각선,아래,위 방향이 3개라서
            }
        }
        if (next == 1)
        {
            if (map[start_x][start_y + 1] == EMPTY)             //=>한칸방향
            {
                start_y++;
                num++;                          //입력되는 수
                map[start_x][start_y] = (num) % 10;
                if (map[start_x + 1][start_y - 1] == EMPTY)             //왼쪽 아래 대각선
                {
                    start_x++;
                    start_y--;
                    num++;
                }
            }
            else
            {
                next++;
                end++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i + 1; j++)
            {
                printf("%d ", map[i][j]);
            }
            printf("\n");
        }
    }
}