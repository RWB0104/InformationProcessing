#include <stdio.h>
#include<math.h>

main()
{
	int a, j;

	scanf("%d", &a);
	
	j = 2;

	while (1)
	{
		if (j <= sqrt(a))
		{
			if (a % j == 0)
			{
				printf("소수 아님");
				break;
			}

			else
			{
				j++;
			}
		}

		else
		{
			printf("소수");
			break;
		}
	}
}