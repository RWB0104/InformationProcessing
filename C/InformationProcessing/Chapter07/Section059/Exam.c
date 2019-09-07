#include <stdio.h>

main()
{
	int b, c, i, a[9];

	printf("***±¸±¸´Ü***\n");
	
	b = 0;

	do
	{
		b++;
		c = 0;

		do
		{
			c++;
			a[c - 1] = b * c;
		}
		
		while (c < 9);

		for (i = 1; i <= 9; i++)
		{
			printf("%d X %d = %2d\n", b, i, a[i - 1]);
		}
	}
	
	while (b < 9);
}