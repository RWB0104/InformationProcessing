#include <stdio.h>

main()
{
	int j, s, f, q, k, n, ct;
	int a[7][7] = { 0 };

	// 7x7 행렬 지정
	for (int x = 0; x < 7; x++)
	{
		for (int y = 0; y < 7; y++)
		{
			printf("%3d", a[x][y]);
		}

		printf("\n");
	}

	n = 7, k = 0;
	j = s = f = q = -1;
	ct = n / 2;

	for (j = 0; j <= n - 1; j++)
	{
		// 열이 행렬의 중앙을 지나지 않았을 경우
		if (j < ct)
		{
			s = j;
			f = n - j;
		}

		// 열이 행렬의 중앙을 지나간 경우
		else
		{
			s = n - (j + 1);
			f = j + 1;
		}
	}

	for (int x = 0; x < 7; x++)
	{
		for (int y = 0; y < 7; y++)
		{
			printf("%3d", a[x][y]);
		}

		printf("\n");
	}
}