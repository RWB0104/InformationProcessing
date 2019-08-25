#include <stdio.h>

main()
{
	int i, j, r;
	int kuk[10], mat[10], hap[10];

	i = -1;

	do
	{
		i++;

		scanf("%d %d", &kuk[i], &mat[i]);

		hap[i] = kuk[i] + mat[i];
	}
	
	while (i < 9);

	for (i = 0; i <= 9; i++)
	{
		if (hap[i] != 0)
		{
			r = 1;

			for (j = 0; j <= 9; j++)
			{
				if (hap[i] < hap[j])
				{
					r++;
				}
			}

			printf("%2d %3d %3d %3d %2d\n", i + 1, kuk[i], mat[i], hap[i], r);
		}
	}
}