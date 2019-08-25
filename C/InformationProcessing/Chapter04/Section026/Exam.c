#include <stdio.h>

main()
{
	int cnt, hap, mok, nmg, i;
	
	cnt = 0;
	hap = 0;

	for (i = 0; i <= 100; i++)
	{
		mok = i / 5;
		nmg = i - mok * 5;

		if (nmg == 0)
		{
			cnt++;
			hap += i;
		}
	}

	printf("%d %d", cnt, hap);
}