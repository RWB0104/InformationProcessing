#include <stdio.h>

main()
{
	int b, c, d, e, f;
	char a[16] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };

	scanf("%d %d", &b, &c);

	d = 1;

	while (d <= c)
	{
		d *= b;
	}

	while (1)
	{
		if (d > 1)
		{
			d /= b;
		}

		e = c / d;
		f = c - e * d;

		printf("%c", a[e]);

		if (d != 1)
		{
			c = f;
		}

		else
		{
			break;
		}
	}
}