#include <stdio.h>

main()
{
	int i, j, k;
	i = 0;
	j = 0;
	k = 0;

	do
	{
		i++;
		j += i;
		k += j;
	}
	
	while (i < 20);

	printf("%d", k);
}