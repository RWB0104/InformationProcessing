#include <stdio.h>

main()
{
	int n, c, k, y, s[20];

	while (1)
	{
		// 소인수분해할 수 입력
		scanf("%d", &n);

		// 입력한 수가 2 이상일 경우
		if (n >= 2)
		{
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
				for (y = 0; y < c; y++)
				{
					printf("%dx", s[y]);
				}

				printf("%d\n", s[c]);
			}
		}
		
		// n이 2 이상이 아니면 소인수분해 불가능
		else
		{
			break;
		}
	}
}