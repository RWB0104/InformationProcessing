#include <stdio.h>

main()
{
	int k, i, j, n;
	int a[5][5] = { 0 };

	k = 0, i = j = -1;
	n = -1;

	while (1)
	{
		i++;
		n *= -1;

		if (i > 4)
		{
			break;
		}

		while (1)
		{
			j += n;
			k++;
			a[i][j] = k;

			if (i % 2 == 0)
			{
				if (j < 4)
				{
					continue;
				}

				else
				{
					j++;
					break;
				}
			}

			else
			{
				if (j > 0)
				{
					continue;
				}

				else
				{
					j = -1;
					break;
				}
			}
		}
	}

	for (int x = 0; x < 5; x++)
	{
		for (int y = 0; y < 5; y++)
		{
			printf("%3d", a[x][y]);
		}

		printf("\n");
	}
}