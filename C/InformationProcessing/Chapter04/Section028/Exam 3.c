#include <stdio.h>
#include <math.h>

main()
{
	int a[5], b[5];
	int i, c;

	for (i = 0; i <= 4; i++)
	{
		scanf("%d", &a[i]);
	}

	c = 1;

	for (i = 4; i >= 0; i--)
	{
		b[i] = a[i] - c;

		if (a[i] == 0 && c == 1)
		{
			c = 1;
		}

		else
		{
			c = 0;
		}

		b[i] = abs(b[i]);
	}

	for (i = 0; i <= 4; i++)
	{
		b[i] = 1 - b[i];
	}

	for (int k = 0; k <= 4; k++)
	{
		printf("%d", a[k]);
	}

	printf(" ");

	for (int k = 0; k <= 4; k++)
	{
		printf("%d", b[k]);
	}
}