#include <stdio.h>

main()
{
	int col, row, k, j, L, e, i;

	scanf("%d", &col);

	row = col * 2 - 1;

	int a[7][4];

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			a[i][j] = 0;
		}
	}

	k = 0;

	for (j = 0; j <= col - 1; j++)
	{
		L = col - (j + 1);
		e = (j - 1) + col;

		for (i = L; i <= e; i++)
		{
			k++;
			a[i][j] = k;
		}
	}

	for (int y = 0; y < row; y++)
	{
		for (int z = 0; z < col; z++)
		{
			printf("%3d", a[y][z]);
		}

		printf("\n");
	}
}