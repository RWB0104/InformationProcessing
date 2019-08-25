#include <stdio.h>

main()
{
	int t, j, k, p;
	int l = 5, m = 5, n = 10;

	t = 0, j = 0, k = 0;

	int a[5] = { 1, 5, 8, 6, 2 };
	int b[5] = { 32, 65, 48, 45, 120 };
	int c[10];

	while (1)
	{
		if (a[t] < b[j])
		{
			c[k] = a[t];
			t++;
			k++;

			if (t > l - 1)
			{
				for (p = j; p < m; p++)
				{
					c[k] = b[p];
					k++;
				}

				break;
			}
		}

		else
		{
			c[k] = b[j];
			j++;
			k++;

			if (j > m - 1)
			{
				for (p = t; p <= l - 1; p++)
				{
					c[k] = a[p];
					k++;
				}

				break;
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", c[i]);
	}
}