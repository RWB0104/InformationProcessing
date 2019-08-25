#include <stdio.h>

main()
{
	int m, n, x, s;
	int k[10] = { 1, 2, 3, 4, 5, 6, 8, 9, 3, 6 };

	m = 9;
	n = -1;

	do
	{
		n++;

		if (k[n] < 5)
		{
			x = 5 - k[n];
		}

		else
		{
			x = k[n] - 5;
		}

		if (m > x)
		{
			m = x;
			s = k[n];
		}
	}
	
	while (n < 9);

	printf("%d", s);
}