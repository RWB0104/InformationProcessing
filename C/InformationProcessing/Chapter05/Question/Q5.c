#include <stdio.h>

main()
{
	FILE *inf;
	inf = fopen("data02.txt", "r");

	int cnt, j, L, h, m, bun, kor, eng, mat;
	int data[2][30];

	cnt = -1;

	while (1)
	{
		cnt++;

		if (fscanf(inf, "%d %d %d %d", &bun, &kor, &eng, &mat) == EOF)
		{
			break;
		}

		data[0][cnt] = bun;
		data[1][cnt] = kor + mat + eng;
	}

	cnt--;

	scanf("%d", &j);

	L = 0;
	h = cnt;

	while (1)
	{
		if (L <= h)
		{
			m = (L + h) / 2;

			if (j == data[0][m])
			{
				printf("%d %d", j, data[1][m]);
				break;
			}

			if (j < data[0][m])
			{
				h = m - 1;
			}

			else
			{
				L = m + 1;
			}
		}

		else
		{
			printf("%d NOT FOUND", j);
			break;
		}
	}

	fclose(inf);
}