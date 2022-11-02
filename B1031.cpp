#include <stdio.h>

int main()
{
	int map[5][5] = { NULL };
	int bingo[5][5] = { NULL };

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
			scanf("d", &map[i][j]);
	}
	for (int k = 0; k < 5; k++)
	{
		for (int l = 0; l < 5; l++)
			scanf("d", &map[k][l]);
		
	}
}