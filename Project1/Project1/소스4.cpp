//지그재그 (준수)
#include <stdio.h>
int main() {

    int n;
    int map[100][100];
    scanf_s("%d", &n);

    int currentX = 0; //최근 X
    int currentY = 0; //최근 Y
    int num = 1; //증가되는 숫자
    int dir = 0; //방향
    map[currentX][currentY] = num++;
    while (1)
    {
        if (currentX + 1 >= n && currentY + 1 >= n) // map[n-1][n-1]에 오면 반복 종료, 즉 마지막 값 까지 다 넣었으면 종료
            break;

        if (0 == dir)  // 방향 1 왼쪽으로
        {
            if (currentY - 1 >= 0 && currentX + 1 < n) // 왼쪽 아래 대각선으로 갈 수 있으면 이동  ↙
            {
                currentX++;
                currentY--;
            }
            else if (currentX + 1 < n) // 왼쪽 아래 대각선으로 갈 수없으면 아래로만 이동 후 방향 변경 ↓
            {
                currentX++;
                dir++;
            }
            else // 왼쪽 아래 대각선, 아래로 모두 갈 수 없으면 오른쪽으로 이동 후 방향 변 경 →
            {
                currentY++;
                dir++;
            }
            map[currentX][currentY] = num++;
        }

        if (1 == dir) // 방향 2 오른쪽으로
        {
            if (currentX - 1 >= 0 && currentY + 1 < n) // 오른쪽 위 대각선으로 갈 수 있으면 이동 ↗
            {
                currentX--;
                currentY++;
            }
            else if (currentY + 1 < n) // 오른쪽 위 대각선으로 갈 수 없으면 오른쪽으로만 이동 후 방향변경 →
            {
                currentY++;
                dir--;
            }
            else // 오른쪽 위 대각선, 오른쪽으로 모두 갈 수 없으면 아래로 이동 후 방향변경 ↓
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