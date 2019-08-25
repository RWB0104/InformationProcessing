#include <stdio.h>

main()
{
	int k, i, j, m;
	int a[99];

	k = 1;

	// 기준 행렬 생성
	do
	{
		k++;
		a[k - 2] = k;
	}

	while (k < 100);

	i = -1;
	j = 0;

	while (1)
	{
		i++;

		// a[99]가 되면 출력 후 종료
		if (i > 98)
		{
			printf("%d", j);
			break;
		}

		// a[i]가 0이면 소수가 아니므로 넘어감
		if (a[i] == 0)
		{
			continue;
		}

		j++;
		m = i;

		while (1)
		{
			// a[i]의 배수
			m += a[i];

			if (m > 98)
			{
				break;
			}

			// a[i]의 배수는 소수가 아니므로 0으로 표시해 제외
			a[m] = 0;
		}
	}
}