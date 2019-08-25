#include <stdio.h>

main()
{
	int m, i, j, k, x;
	int data[10];

	// 배열 요소 입력
	for (m = 0; m <= 9; m++)
	{
		scanf("%d", &data[m]);
	}

	// 배열 맨 끝보다 한 단계 아래까지 비교
	for (i = 0; i <= 8; i++)
	{
		// 배열 맨 끝까지 비교
		for (j = i + 1; j <= 9; j++)
		{
			// 앞의 요소 크기가 더 클 경우 위치 교체
			if (data[i] > data[j])
			{
				k = data[i];
				data[i] = data[j];
				data[j] = k;
			}
		}
	}

	for (x = 0; x <= 9; x++)
	{
		printf("%d ", data[x]);
	}
}