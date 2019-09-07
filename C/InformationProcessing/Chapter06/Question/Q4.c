#include <stdio.h>

main()
{
	int i, j, k, nmg, a[5][5] = { 0 };

	i = 0, k = 0;
	j = 5 / 2;

	do
	{
		k++;
		a[i][j] = k;
		nmg = k % 5;

		// 5의 배수일 경우
		if (nmg == 0)
		{
			// 행 한단계 내림
			i++;
		}

		else
		{
			i--;
			j++;

			// i가 0보다 작을 경우
			if (i < 0)
			{
				// 행 4로 변환
				i = 4;
			}

			// j가 4보다 클 경우
			if (j > 4)
			{
				// 열 0으로 변환
				j = 0;
			}
		}
	}
	while (k < 25);

	for (int x = 0; x < 5; x++)
	{
		for (int y = 0; y < 5; y++)
		{
			printf("%3d", a[x][y]);
		}

		printf("\n");
	}
}