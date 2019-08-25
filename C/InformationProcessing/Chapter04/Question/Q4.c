#include <stdio.h>

main()
{
	int a, b, n, sum, cnt, avg;
	sum = 0;
	cnt = 0;
	avg = 0;

	printf("ют╥б A B : ");
	scanf("%d %d", &a, &b);

	if (a > b)
	{
		for (n = b; n <= a; n++)
		{
			sum += n;
			cnt++;
		}
	}

	else
	{
		for (n = a; n <= b; n++)
		{
			sum += n;
			cnt++;
		}
	}

	avg = sum / cnt;

	printf("sum : %d\n", sum);
	printf("avg : %d\n", avg);
}