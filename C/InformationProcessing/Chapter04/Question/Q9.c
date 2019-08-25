#include <stdio.h>
#include <math.h>

main()
{
	int p = 2;
	int n = 3;

	while (1)
	{
		// 소수를 판별할 땐 자신의 제곱근까지만 나눠도 됨
		double t = sqrt(n);
		int m = (int)t;

		// r을 2 부터 m까지 나눔
		for (int i = 2; i <= m; i++)
		{
			int r = n % i;

			// 나눠질 경우 소수가 아님
			if (r == 0)
			{
				break;
			}

			// 자기 자신으로만 나눠지면 소수
			if (i == m)
			{
				p = n;
			}
		}

		n++;

		// n이 100 초과면 종료
		if (n > 100)
		{
			break;
		}
	}

	printf("%d\n", p);
}