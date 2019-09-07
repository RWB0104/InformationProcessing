#include <stdio.h>

main()
{
	int i, j, k, cnt, hap;
	
	cnt = 0;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 10; j++)
		{
			for (k = 0; k <= 10; k++)
			{
				hap = i * 200 + j * 300 + k * 400;

				if (hap == 3000)
				{
					cnt++;

					printf("%d %d %d %d\n", cnt, i, j, k);
				}
			}
		}
	}
}