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
            map[i][j] = EMPTY;              // ��谪 ����
        }

    int next = 0;               //���� ������ ���� �Լ�
    int end = 0;                //���� ������ ������ while�� ������ ���� ��
    int num = 0;                //
    bool lock = false;
    while (1)
    {
        //if (lock == false)
        map[start_x][start_y] = (num) % 10;       //0~9 ǥ��

        end = 0;
        if (next == 0)
        {
            if (map[start_x + 1][start_y] == EMPTY)             //�Ʒ� ��ĭ
            {
                start_x++;
                num++;
                map[start_x][start_y] = (num) % 10;       //0~9 ǥ��
                if (map[start_x - 1][start_y + 1] == EMPTY)             //������ �밢��
                {
                    start_x--;
                    start_y++;
                    num++;
                }
            }
            else
            {
                next++;             //�밢���� ������ next ==1����
                end++;              //end ���� (ciy=count ����) �밢��,�Ʒ�,�� ������ 3����
            }
        }
        if (next == 1)
        {
            if (map[start_x][start_y + 1] == EMPTY)             //=>��ĭ����
            {
                start_y++;
                num++;                          //�ԷµǴ� ��
                map[start_x][start_y] = (num) % 10;
                if (map[start_x + 1][start_y - 1] == EMPTY)             //���� �Ʒ� �밢��
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