#include <stdio.h>

main()
{
	int a, b, big, small, mok, nmg, gcm, lcm;

	scanf("%d %d", &a, &b);

	// a가 b보다 클 경우
	if (a >= b)
	{
		big = a;
		small = b;
	}

	// a가 b보다 작을 경우
	else
	{
		big = b;
		small = a;
	}

	while (1)
	{
		mok = big / small;
		nmg = big - mok * small;

		// 나머지가 0일 경우
		if (nmg == 0)
		{
			gcm = small;
			lcm = a * b / gcm;

			printf("%d %d", gcm, lcm);
			
			break;
		}

		// small을 big으로, 나머지를 small로 대입
		big = small;
		small = nmg;
	}
}