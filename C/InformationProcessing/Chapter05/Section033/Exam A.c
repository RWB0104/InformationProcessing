#include <stdio.h>

main()
{
	int i, k, key;
	int a[20] = { 9, 7, 4, 6, 3, 1, 8, 2, 5, 10, 19, 17, 14, 16, 13, 11, 18, 12, 15, 20 };

	i = 1;

	do
	{
		key = a[i];
		k = i - 1;

		do
		{
			if (key < a[k])
			{
				a[k + 1] = a[k];
				k--;
			}

			else
			{
				break;
			}
		}
		
		while (k >= 0);

		a[k + 1] = key;
		i++;
	}
	
	while (i <= 19);

	for (i = 0; i < 20; i++)
	{
		printf("%d ", a[i]);
	}
}