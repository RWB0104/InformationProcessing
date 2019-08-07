#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int n = 0;

	// 난수 기준값 지정
	srand(time(NULL));

	while (n != 1)
	{
		n = rand() % 6 + 1;

		printf("%d\n", n);
	}
}