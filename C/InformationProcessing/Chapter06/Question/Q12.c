#include <stdio.h>

main()
{
	int cnt, p, q, mok, nam, k;
	int tmp[15] = { 0 };
	int a[5][5] = { 0 };

	tmp[0] = 2, tmp[1] = 3;
	cnt = 1;

	for (p = 5; p <= 1000; p += 2)
	{
		for (q = 1; q <= cnt; q++)
		{
			mok = p / tmp[q];
			nam = p - mok * tmp[q];

			if (nam == 0)
			{
				continue;
			}
		}

		if (nam == 0)
		{
			continue;
		}

		cnt++;
		tmp[cnt] = p;

		if (cnt == 14)
		{
			break;
		}
	}

	cnt = 0;

	for (p = 0; p <= 4; p++)
	{
		k = 4 - p;

		for (q = k; q <= 4; q++)
		{
			a[p][q] = tmp[cnt];
			cnt++;
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