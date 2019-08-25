#include <stdio.h>

main()
{
	int i, j, k, l;

	i = 0;
	j = 1;
	k = -1;
	l = -1;

	do
	{
		i++;
		j += i;
		l *= -1;
		k += j * l;
	}
	
	while (i < 19);

	printf("%d", k);
}