#include <stdio.h>

main()
{
	int a, b, c, sum;
	
	a = b = 1;
	sum = a + b;

	for (int i = 3; i <= 5; i++)
	{
		c = a + b;
		sum += c;
		a = b;
		b = c;
	}

	printf("%d\n", sum);
}