#include <stdio.h>

// 소수 판별 함수
int isprime(int number)
{
	int i;

	// 2부터 number 전까지 나눔
	for (i = 2; i < number; i++)
	{
		// number가 나눠지면 소수가 아님
		if (number % i == 0)
		{
			return 0;
		}
	}

	// 나눠지지 않으면 소수
	return 1;
}

int	main()
{
	int number = 100, cnt = 0, i;

	// isprime을 이용해 소수의 갯수 계산
	for (i = 2; i < number; i++)
	{
		cnt += isprime(i);
	}

	printf("%d를 넘지 않는 소수는 %d개 입니다.\n", number, cnt);

	return 0;
}