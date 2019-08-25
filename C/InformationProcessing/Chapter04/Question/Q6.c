#include <stdio.h>

main()
{
	int i = 0, su1 = 0, su2 = 0, su3 = 0;

	do
	{
		i++;
		su1 = i % 3;
		su2 = i % 5;
		su3 = su1 + su2;

		if (su3 == 0)
		{
			printf("%d\n", i);
		}
	}
	
	while (i < 100);
}