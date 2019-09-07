#include <stdio.h>

main()
{
	int x, y, h, L;
	int p[5][5] = { 0 }, q[5][5] = { 0 };
	
	h = L = 0;

	for (x = 0; x <= 4; x++)
	{
		for (y = 0; y <= 4; y++)
		{
			h += 2;
			p[x][y] = h;
		}
	}

	for (x = 2; x >= 1; x--)
	{
		for (y = 0; y <= 4; y++)
		{
			for (h = 0; h <= 4; h++)
			{
				L = 4 - h;

				if (x == 2)
				{
					q[y][h] = p[L][y];
				}

				else
				{
					p[y][h] = q[L][y];
				}
			}
		}
	}

	for (x = 0; x < 5; x++)
	{
		for (y = 0; y < 5; y++)
		{
			printf("%3d", q[x][y]);
		}

		printf("\n");
	}

	for (x = 0; x < 5; x++)
	{
		for (y = 0; y < 5; y++)
		{
			printf("%3d", p[x][y]);
		}

		printf("\n");
	}
}