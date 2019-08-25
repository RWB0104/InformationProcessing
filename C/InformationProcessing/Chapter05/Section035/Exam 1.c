#include <stdio.h>

main()
{
	int j, L, h, m;
	int data[10] = { 8, 15, 35, 55, 60, 61, 70, 80, 92, 99 };

	scanf("%d", &j);

	// 시작과 끝
	L = 0;
	h = 9;
	
	while (1)
	{
		// 시작보다 끝값이 클 때
		if (L <= h)
		{
			// 배열의 중간값
			m = (L + h) / 2;

			// 입력값한 값이 배열의 중간값과 같을 경우
			if (j == data[m])
			{
				printf("%d %d", j, m + 1);
				break;
			}

			// 입력한 값이 배열의 중간값보다 작을 경우
			if (j < data[m])
			{
				// 끝값을 낮춤
				h = m - 1;
			}

			// 입력한 값이 배열의 중간값보다 클 경우
			else
			{
				// 시작값을 높임
				L = m + 1;
			}
		}

		else
		{
			printf("%d NOT FOUND", j);
			break;
		}
	}
}