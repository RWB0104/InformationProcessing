#include <stdio.h>

main()
{
	int hap, cnt, c;
	int a = 1, b = 1;

	hap = 2;
	cnt = 2;

	while (1)
	{
		c = a + b;
		printf("%4d %4d %4d %4d %4d\n", a, b, c, hap, cnt);
		hap += c;
		cnt++;
		
		if (cnt < 20)
		{
			a = b;
			b = c;
		}

		else
		{
			printf("%d", hap);
			break;
		}
	}
}