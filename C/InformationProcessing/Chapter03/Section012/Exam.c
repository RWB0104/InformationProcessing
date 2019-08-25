#include <stdio.h>

main()
{
	float i = 0, j = 0;

	do
	{
		i++;

		// 분수가 짝수일 경우
		if ((int)(i / 2) == i / 2)
		{
			j += i / (i + 1);
		}

		// 분수가 홀수일 경우
		else
		{
			j -= i / (i + 1);
		}
	}
	
	while (i < 99);

	printf("%f", j);
}