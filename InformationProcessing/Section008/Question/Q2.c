#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int hist[6] = { 0, };
	int n, i = 0;
	srand(time(NULL));

	do
	{
		i++;
		n = rand() % 6 + 1;

		// 주사위는 1 ~ 6이지만, 배열은 0 ~ 5이므로 값을 맞춰줘야 한다.
		hist[n - 1] += 1;
	}

	while (i < 100);

	for (i = 0; i < 6; i++)
	{
		printf("[%d] = %d\n", i + 1, hist[i]);
	}
}