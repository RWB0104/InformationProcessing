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
		// a ��Ұ� b ��Һ��� ���� ���
		if (a[t] < b[j])
		{
			c[k] = a[t];
			t++;
			k++;

			// a ��Ұ� ������ ���
			if (t > L - 1)
			{
				// ���� b ��� ���
				for (int p = 0; p <= m - 1; p++)
				{
					c[k] = b[p];
					k++;
				}

				break;
			}
		}

		// a ��Ұ� b ��Һ��� Ŭ ���
		else
		{
			c[k] = b[j];
			j++;
			k++;

			// b ��Ұ� ������ ���
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

	// ���
	for (int i = 0; i < k; i++)
	{
		printf("%d ", c[i]);
	}
}