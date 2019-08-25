#include <stdio.h>

main()
{
	int n, c, k, y;
	int s[20];

	while (1)
	{
		// 소인수분해할 수 입력
		scanf("%d", &n);

		// n보다 작은 수는 소인수분해가 불가능
		if (n < 2)
		{
			break;
		}

		c = -1;

		// n이 1이 될 때까지
		do
		{
			// 제수
			k = 2;

			// n이 k로 완전히 나눠질 때까지
			while (n % k != 0)
			{
				k++;
			}

			c++;
			s[c] = k;
			n /= k;
		}

		while (n != 1);

		// c가 한 번만 증가했을 경우
		if (c == 0)
		{
			printf("소수\n");
		}

		else
		{
			for (y = 0; y <= c - 1; y++)
			{
				printf("%dX", s[y]);
			}

			printf("%d", s[c]);
		}
	}
}