#include <stdio.h>

main()
{
	int a, b, y, n, k, c;
	a = 1, b = 1;
	y = 2;
	
	scanf("%d", &n);

	for (k = 3; k <= n; k++)
	{
		c = a + b;
		y += c;
		a = b;
		b = c;
	}

	printf("%d", y);
}