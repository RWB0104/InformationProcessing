#include <stdio.h>

main()
{
	int num = 0, totodd = 0, toteven = 0, tot10su = 0;
	num = 99;

	while (1)
	{
		num++;

		// num이 500을 넘을 경우 결과 출력 후 종료
		if (num > 500)
		{
			printf("홀수의 합 : %d\n", totodd);
			printf("짝수의 합 : %d\n", toteven);
			printf("10의 배수의 합 : %d\n", tot10su);
			break;
		}

		else
		{
			// num이 짝수일 때
			if (num % 2 == 0)
			{
				toteven += num;

				// num이 10의 배수일 때
				if (num % 10 == 0)
				{
					tot10su += num;
				}
			}

			// num이 홀수일 때
			else
			{
				totodd += num;
			}
		}
	}
}