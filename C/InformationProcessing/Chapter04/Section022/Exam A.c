#include <stdio.h>

main()
{
	int b, bb, c, mok, nmg, k, i;
	int a[10];

	scanf("%d", &b);

	bb = b;
	c = -1;

	do
	{
		c++;
		mok = b / 2;
		nmg = b - mok * 2;
		a[9 - c] = nmg;
		b = mok;
	}
	
	while (mok != 0);

	printf("%d ", bb);

	k = 9 - c;

	for (i = k; i < 10; i++)
	{
		printf("%d", a[i]);
	}
}