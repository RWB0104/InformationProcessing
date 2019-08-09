#include <stdio.h>

void calc(int *x, int *y)
{
	*y -= *x;
	*y = *x > *y ? *x - *y : *y - *x;
}

main()
{
	int i = 15, j = 35;
	calc(&i, &j);

	printf("%d %d\n", i, j);
}