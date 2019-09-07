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

		// 4행 이상일 경우
		if (i > 4)
		{
			break;
		}

		while (1)
		{
			j += n;
			k++;
			a[i][j] = k;

			// 2, 4번 째 행일 경우
			if (i % 2 == 0)
			{
				// 열이 4보다 작을 경우
				if (j < 4)
				{
					continue;
				}

				// 아닐 경우
				else
				{
					j++;
					break;
				}
			}

			// 아닐 경우
			else
			{
				// 첫 번째 행보다 클 경우
				if (j > 0)
				{
					continue;
				}

				// 아닐 경우
				else
				{
					j = -1;
					break;
				}
			}
		}
	}

	for (int x = 0; x <= 4; x++)
	{
		for (int y = 0; y <= 4; y++)
		{
			printf("%3d", a[x][y]);
		}

		printf("\n");
	}
}