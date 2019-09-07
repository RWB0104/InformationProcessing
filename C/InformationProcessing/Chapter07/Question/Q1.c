#include <stdio.h>

main()
{
	int i, sw, j, k;

	i = 50000;
	sw = 0;

	scanf("%d", &j);

	while (1)
	{
		k = j / i;

		printf("%5d, %d\n", i, k);

		if (i <= 1)
		{
			break;
		}

		j = j - (k * i);

		if (sw == 0)
		{
			i /= 5;
			sw = 1;
		}

		else
		{
			i /= 2;
			sw = 0;
		}
	}
}