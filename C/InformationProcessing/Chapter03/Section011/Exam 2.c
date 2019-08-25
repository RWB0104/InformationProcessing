#include <stdio.h>

main()
{
	int i = 0, j = 0;

	while (1)
	{
		i++;
		j += i;

		// i = 99가 되면 결과 출력 후 종료
		if (i >= 99)
		{
			printf("%d", j);
			break;
		}

		else
		{
			i++;
			j -= i;
		}
	}
}