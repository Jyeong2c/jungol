#include <stdio.h>



int main()
{

	char map[5][15] = { NULL };

	for (int j = 0; j < 5; j++)
	{
		scanf("%s", &map[j]);
	}

	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (map[j][i] == NULL)
			{
				continue;
			}
			printf("%c", map[j][i]);
		}
	}

}