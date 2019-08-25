#include <stdio.h>

main()
{
	int x, m, k, i, j, L;

	scanf("%d", &x);

	int a[7][7];

	for (i = 0; i < x; i++)
	{
		for (j = 0; j < x; j++)
		{
			a[i][j] = 0;
		}
	}

	k = 0;
	m = x / 2;

	for (i = 0; i <= x - 1; i++)
	{
		if (i < m)
		{
			L = x - i;
		}

		else
		{
			L = i + 1;
		}

		for (j = 0; j <= L - 1; j++)
		{
			k++;
			a[i][j] = k;
		}
	}

	for (int y = 0; y < x; y++)
	{
		for (int z = 0; z < x; z++)
		{
			printf("%3d", a[y][z]);
		}

		printf("\n");
	}
}