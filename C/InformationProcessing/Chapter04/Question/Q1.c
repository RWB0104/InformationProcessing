#include <stdio.h>

main()
{
	int lm, n, j, sum, k, r;
	lm = 0;

	for (n = 4; n <= 1000; n++)
	{
		sum = 0;
		k = n / 2;

		for (j = 1; j <= k; j++)
		{
			r = n % j;
			
			if (r == 0)
			{
				sum += j;
			}
		}

		if (n == sum)
		{
			printf("�� : %3d\n", n);
			
			lm++;
		}
	}

	printf("�� ���� : %d", lm);
}