#include <stdio.h>

main()
{
	int i, j, n, k, nmg, a[5] = { 0 };

	i = 0;

	while (1)
	{
		n = -1;
		i++;
		j = i;
		k = 0;

		do
		{
			k++;
			nmg = j % 4;

			if (nmg != 1)
			{
				break;
			}

			j--;

			n++;
			a[n] = j / 4;

			j *= 0.75;
		}
		
		while (k < 5);

		if (k >= 5)
		{
			break;
		}
	}

	nmg = j + (j * 3 / 4) + 1;
	printf("%d %d %d %d %d %d", i, a[0], a[1], a[2], a[3], nmg);
}