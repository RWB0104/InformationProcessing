#include <stdio.h>

main()
{
	int i, z, c, j;
	int x[10], y[10], a[10];

	for (i = 0; i <= 9; i++)
	{
		scanf("%d", &x[i]);
	}

	for (i = 0; i <= 9; i++)
	{
		scanf("%d", &y[i]);
	}

	z = 0, c = 0, j = 9;

	do
	{
		z = x[j] + y[j] + c;

		if (z < 2)
		{
			c = 0;
			a[j] = z;
		}

		else
		{
			c = 1;
			a[j] = z - 2;
		}

		j--;
	}
	
	while (j >= 0);

	if (c == 0)
	{
		do
		{
			j++;

			printf("%d", a[j]);
		}

		while (j < 9);
	}

	else
	{
		printf("OVERFLOW!!");
	}
}