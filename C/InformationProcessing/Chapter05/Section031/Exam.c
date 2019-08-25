#include <stdio.h>

main()
{
	int m, i, j, k, x;
	int data[10];
	m = -1;

	// 배열 요소 입력
	do
	{
		m++;
		scanf("%d", &data[m]);
	}
	
	while (m < 9);

	i = -1;

	// 배열 맨 끝보다 한 단계 아래까지 비교
	do
	{
		i++;
		j = i;

		// 배열 맨 끝까지 비교
		do
		{
			j++;

			// 앞의 요소 크기가 더 클 경우 위치 교체
			if (data[i] > data[j])
			{
				k = data[i];
				data[i] = data[j];
				data[j] = k;
			}
		}
		
		while (j < 9);
	}
	
	while (i < 8);

	for (x = 0; x <= 9; x++)
	{
		printf("%d ", data[x]);
	}
}