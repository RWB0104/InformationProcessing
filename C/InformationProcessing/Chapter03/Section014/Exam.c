#include <stdio.h>

main()
{
	int i, j, k;

	i = 1;
	j = 1;
	k = 1;

	do
	{
		i++;
		j *= i;
		k += j;
	}
	
	while (i < 10);

	printf("%d", k);
}