#include <stdio.h>

main()
{
	int i, j;
	i = -1, j = 0;

	do
	{
		i += 2;
		j += i;
	}
	
	while (i < 99);

	printf("%d", j);
}