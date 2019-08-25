#include <stdio.h>

main()
{
	int q, m, p, h;
	p = 0;
	h = 0;

	do
	{
		p++;
		q = 78 - p;
		m = p * q;
		h += m;
	}

	while (p < 77);

	printf("%d", h);
}