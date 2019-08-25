#include <stdio.h>

main()
{
	int num[10];
	int min = 9999;
	int i;

	// 비교할 값 입력
	for (i = 0; i < 10; i++)
	{
		printf("%d번 째 수 : ", i);
		scanf("%d", &num[i]);
	}

	// 값 비교
	for (i = 0; i < 10; i++)
	{
		// 최소값보다 비교값이 작으면 치환
		if (min > num[i])
		{
			min = num[i];
		}
	}

	printf("가장 작은 값은 %d이다.", min);
}