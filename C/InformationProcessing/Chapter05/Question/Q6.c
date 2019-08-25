#include <stdio.h>

main()
{
	int t, j, k, q;
	int L = 5, m = 9, n = 20;

	int a[5] = { 1, 3, 5, 6, 7 };
	int b[9] = { 2, 3, 5, 8, 9, 10, 12, 13, 14 };
	int c[20];

	t = j = k = 0;

	while (1)
	{
		// a 요소가 b 요소보다 작을 경우
		if (a[t] < b[j])
		{
			c[k] = a[t];
			t++;
			k++;

			// a 요소가 끝났을 경우
			if (t > L - 1)
			{
				// 남은 b 요소 기록
				for (int p = 0; p <= m - 1; p++)
				{
					c[k] = b[p];
					k++;
				}

				break;
			}
		}

		// a 요소가 b 요소보다 클 경우
		else
		{
			c[k] = b[j];
			j++;
			k++;

			// b 요소가 끝났을 경우
			if (m - 1 < j)
			{
				for (int p = 0; p <= L - 1; p++)
				{
					c[k] = a[p];
					k++;
				}

				break;
			}
		}
	}

	// 출력
	for (int i = 0; i < k; i++)
	{
		printf("%d ", c[i]);
	}
}