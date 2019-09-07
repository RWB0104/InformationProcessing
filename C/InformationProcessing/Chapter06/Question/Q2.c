#include <stdio.h>

main()
{
	int c, n, s, j, r1, r2;
	int a[5][5] = { 0 };

	c = 2, n = -1, s = -1, j = -1;
	r1 = c;
	r2 = c;

	do
	{
		s++;
		j = r1;

		do
		{
			n += 2;
			a[s][j] = n;
			j++;
		}
		
		while (j <= r2);

		if (s >= c)
		{
			r1++;
			r2 = r2 - 1;
		}

		else
		{
			r1 = r1 - 1;
			r2 = r2 + 1;
		}
	}
	
	while (s < 5);

	for (int x = 0; x < 5; x++)
	{
		for (int y = 0; y < 5; y++)
		{
			printf("%3d", a[x][y]);
		}

		printf("\n");
	}
}