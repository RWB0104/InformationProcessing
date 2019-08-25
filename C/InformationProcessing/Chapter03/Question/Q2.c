#include <stdio.h>

main()
{
	int even, odd, k, g, s, j;
	
	even = 0;
	odd = 0;
	k = 0;
	g = 0;
	s = -1;
	j = 1;

	do
	{
		k = (j / 2) * 2;
		s *= -1;
		g = j * s;

		if (k == j)
		{
			even += g;
		}

		else
		{
			odd += g;
		}

		j++;

	}
	
	while (j <= 100);

	printf("%5d, %5d", even, odd);
}