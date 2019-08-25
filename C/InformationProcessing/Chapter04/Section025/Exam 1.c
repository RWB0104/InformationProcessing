#include <stdio.h>

main()
{
	int i;
	int a[10];
	int j = -1, max = 0;

	// 배열 입력
	do
	{
		j++;

		scanf("%d", &a[j]);
	}
	
	while (j < 9);

	for (i = 0; i <= 9; i++)
	{
		// 비교값이 최대값보다 클 경우
		if (a[i] > max)
		{
			max = a[i];
		}
	}

	printf("%d", max);
}