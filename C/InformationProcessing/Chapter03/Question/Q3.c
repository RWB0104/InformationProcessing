#include <stdio.h>

main()
{
	float a, d, hap;

	hap = 1;
	a = 1;

	do
	{
		d = 1 / a;
		hap += d;
		a++;
	}
	
	while (a <= 10);

	printf("%f", hap);
}