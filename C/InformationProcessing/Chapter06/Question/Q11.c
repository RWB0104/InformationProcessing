#include <stdio.h>

main()
{
	int i, j, k, nmg;
	int a[5][5] = { 0 };

	i = 0, k = 0;
	j = 5 / 2;

	do
	{
		k++;
		a[i][j] = k;
		nmg = k - k / 5 * 5;

		if (nmg == 0)
		{
			i++;
		}

		else
		{
			i--;
			j++;

			if (i < 0)
			{
				i = 4;
			}

			if (j > 4)
			{
				j = 0;
			}
		}
	}
	
	while (k < 25);

	for (int x = 0; x <= 4; x++)
	{
		for (int y = 0; y <= 4; y++)
		{
			printf("%3d", a[x][y]);
		}

		printf("\n");
	}
}