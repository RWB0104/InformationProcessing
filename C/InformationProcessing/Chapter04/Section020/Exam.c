#include <stdio.h>

main()
{
	int b, mok, nmg, i;
	int a[100];

	scanf("%d", &b);

	int c = 0, d = -1;

	while (1)
	{
		c++;

		// 제수가 기준수보다 작을 경우
		if (c <= b)
		{
			mok = b / c;
			nmg = b - mok * c;

			// 나머지가 0인 경우 (약수)
			if (nmg == 0)
			{
				d++;
				a[d] = c;
			}
		}

		// 제수가 기준수보다 크거나 같을 경우
		else
		{
			printf("%d ", b);

			for (i = 0; i <= d; i++)
			{
				printf("%d ", a[i]);
			}

			break;
		}
	}
}