#include <stdio.h>
#include <math.h>

main()
{
	int b, c, d, e, mok, nmg;
	int a[100];

	scanf("%d", &b);

	c = -1;

	while (1)
	{
		d = 2;
		e = (int)sqrt(b);

		while (1)
		{
			if (d > e)
			{
				d = b;
				break;
			}

			mok = b / d;
			nmg = b - mok * d;

			// 나머지가 0인 경우 (소인수)
			if (nmg == 0)
			{
				break;
			}

			// 아닐 경우 제수 증가
			else
			{
				d++;
			}
		}

		c++;
		a[c] = d;

		// 기준수와 제수가 같을 경우 종료
		if (b == d)
		{
			break;
		}

		b = mok;
	}

	for (int i = 0; i <= c; i++)
	{
		printf("%d ", a[i]);
	}
}