#include <stdio.h>
#include <stdlib.h>

// 전역변수 지정
void BB(b, c);
void CC(a, c);
void DD(c);
int i, j, k;

main()
{
	int a[10] = { 2, 3, 5, 8, 9, 10, 12, 13, 0 };
	int b[10] = { 1, 3, 5, 6, 0 };
	int c[20];

	i = 0;
	j = 0;
	k = -1;

	while (1)
	{
		k++;

		// a 요소가 b 요소보다 작을 경우
		if (a[i] < b[j])
		{
			// a 요소 기록
			c[k] = a[i];
			i++;

			// a 요소가 0(끝)일 경우
			if (a[i] == 0)
			{
				BB(b, c);
			}
		}

		// a 요소와 b 요소가 같을 경우
		else if (a[i] == b[j])
		{
			// a 요소 기록 (b 요소를 기록해도 상관 없음)
			c[k] = a[i];
			i++;
			j++;

			// a 요소가 0(끝)일 경우
			if (a[i] == 0)
			{
				BB(b, c);
			}

			// b 요소가 0(끝)일 경우
			else if (b[j] == 0)
			{
				CC(a, c);
			}
		}

		// a 요소가 b 요소보다 클 경우
		else
		{
			// b 요소 기록
			c[k] = b[j];
			j++;

			// b 요소가 0(끝)일 경우
			if (b[j] == 0)
			{
				CC(a, c);
			}
		}
	}
}

// 남은 b와 c 병합
void BB(int b[10], int c[10])
{
	// b 요소가 0(끝)일 경우
	if (b[j] == 0)
	{
		DD(c);
	}

	// b 요소가 0(끝)이 될 때까지
	do
	{
		k++;
		c[k] = b[j];
		j++;
	}
	
	while (b[j] != 0);

	DD(c);
}

// 남은 a와 c 병합
void CC(int a[10], int c[10])
{
	// a 요소가 0(끝)이 될 때까지
	do
	{
		k++;
		c[k] = a[i];
		i++;
	}
	
	while (a[i] != 0);

	DD(c);
}

// 병합 종료
void DD(int c[10])
{
	k++;
	c[k] = 0;

	// 병합한 내용 출력
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", c[i]);
	}

	// 프로그램 종료
	exit(0);
}