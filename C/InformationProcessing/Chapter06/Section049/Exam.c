#include <stdio.h>

main()
{
	int row, col, i, j, L, m;

	scanf("%d %d", &row, &col);

	int a[5][3];
	int b[3][5];
	int k = 0;

	for (i = 0; i <= row - 1; i++)
	{
		for (j = 0; j <= col - 1; j++)
		{
			k++;
			a[i][j] = k;
		}
	}

	L = 0;
	m = -1;

	for (i = 0; i <= row - 1; i++)
	{
		for (j = 0; j <= col - 1; j++)
		{
			m += 1;
			b[L][m] = a[i][j];

			if (m >= row - 1)
			{
				L++;
				m = -1;
			}
		}
	}

	for (int x = 0; x <= 4; x++)
	{
		for (int y = 0; y <= 4; y++)
		{
			printf("%3d", b[x][y]);
		}

		printf("\n");
	}
}