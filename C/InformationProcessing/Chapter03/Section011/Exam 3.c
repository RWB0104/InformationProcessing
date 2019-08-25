#include <stdio.h>

main()
{
	int i;
	double j;

	i = 0;
	j = 0;

	do
	{
		i++;

		// i가 짝수인 경우
		if (i % 2 == 0)
		{
			j += i;
		}

		// i가 홀수인 경우
		else
		{
			j *= (-i);
		}
	}
	
	while (i < 100);

	printf("%11.4e", j);
}