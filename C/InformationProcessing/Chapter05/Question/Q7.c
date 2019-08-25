#include <stdio.h>

// 선택정렬 알고리즘
int arr(int a[])
{
	int i, j, sw, temp, n = 4;

	// a의 첫 요소가 1보다 작거나 0일 경우 a 반환
	if (a[0] == 0 || a[0] < 1)
	{
		return a;
	}

	// 선택정렬
	for (i = 0; i < n - 1; i++)
	{
		sw = i;

		for (j = i + 1; j < n; j++)
		{
			if (a[j] < a[sw])
			{
				sw = j;
			}
		}

		temp = a[i];
		a[i] = a[sw];
		a[sw] = temp;
	}

	return a;
}

main()
{
	int i;
	int n[] = { 4, 2, 7, 1 };

	arr(n);

	for (i = 0; i < 4; i++)
	{
		printf("%3d", n[i]);
	}
}