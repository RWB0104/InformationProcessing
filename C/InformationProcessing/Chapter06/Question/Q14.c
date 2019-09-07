#include <stdio.h>

main()
{
	int q, e, c, t, j;
	int a[9][9] = { 0 };

	q = e = c = 0;
	t = j = 0;
	c = 9 / 2;

	for (t = 0; t <= 8; t++)
	{
		if (t < c)
		{
			e = 8 - t;
		}

		else
		{
			e = t;
		}

		for (j = 0; j <= e; j++)
		{
			q++;
			a[j][t] = q;
		}
	}

	for (int x = 0; x < 9; x++)
	{
		for (int y = 0; y < 9; y++)
		{
			printf("%3d", a[x][y]);
		}

		printf("\n");
	}
}