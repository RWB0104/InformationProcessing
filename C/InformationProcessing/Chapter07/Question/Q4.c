#include <stdio.h>

main()
{
	int i, j;

	for (i = 2; i <= 9; i++)
	{
		for (j = 2; j <= 9; j++)
		{
			printf("%d * %d = %2d\n", i, j, i * j);
		}
	}
}