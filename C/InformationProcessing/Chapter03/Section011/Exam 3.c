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

		// i�� ¦���� ���
		if (i % 2 == 0)
		{
			j += i;
		}

		// i�� Ȧ���� ���
		else
		{
			j *= (-i);
		}
	}
	
	while (i < 100);

	printf("%11.4e", j);
}