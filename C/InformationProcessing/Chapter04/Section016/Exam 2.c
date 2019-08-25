#include <stdio.h>

main()
{
	int a, j;

	scanf("%d", &a);

	j = 2;

	while (a % j != 0)
	{
		printf("%2d %2d\n", a, j);
		j++;
	}

	if (a == j)
	{
		printf("소수");
	}

	else
	{
		printf("소수 아님");
	}
}