#include <stdio.h>

main()
{
	int a[5];
	int i = 0;

	for (i = 0; i < 5; i++)
	{
		a[i] = i + 10;
	}

	for (i = 0; i < 5; i++)
	{
		printf("%d ", a[i]);
	}
}