//������� (�ؼ�)
#include <stdio.h>
int main() {

    int n;
    int map[100][100];
    scanf_s("%d", &n);

    int currentX = 0; //�ֱ� X
    int currentY = 0; //�ֱ� Y
    int num = 1; //�����Ǵ� ����
    int dir = 0; //����
    map[currentX][currentY] = num++;
    while (1)
    {
        if (currentX + 1 >= n && currentY + 1 >= n) // map[n-1][n-1]�� ���� �ݺ� ����, �� ������ �� ���� �� �־����� ����
            break;

        if (0 == dir)  // ���� 1 ��������
        {
            if (currentY - 1 >= 0 && currentX + 1 < n) // ���� �Ʒ� �밢������ �� �� ������ �̵�  ��
            {
                currentX++;
                currentY--;
            }
            else if (currentX + 1 < n) // ���� �Ʒ� �밢������ �� �������� �Ʒ��θ� �̵� �� ���� ���� ��
            {
                currentX++;
                dir++;
            }
            else // ���� �Ʒ� �밢��, �Ʒ��� ��� �� �� ������ ���������� �̵� �� ���� �� �� ��
            {
                currentY++;
                dir++;
            }
            map[currentX][currentY] = num++;
        }

        if (1 == dir) // ���� 2 ����������
        {
            if (currentX - 1 >= 0 && currentY + 1 < n) // ������ �� �밢������ �� �� ������ �̵� ��
            {
                currentX--;
                currentY++;
            }
            else if (currentY + 1 < n) // ������ �� �밢������ �� �� ������ ���������θ� �̵� �� ���⺯�� ��
            {
                currentY++;
                dir--;
            }
            else // ������ �� �밢��, ���������� ��� �� �� ������ �Ʒ��� �̵� �� ���⺯�� ��
            {
                currentX++;
                dir--;
            }
            map[currentX][currentY] = num++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", map[i][j]);
        printf("\n");
    }


    return 0;
}