#include <stdio.h>

main()
{
	int a = 5, b = 10, c = 15, d = 30, result;
	result = a * 3 + b || c - b / a <= d && 1;

	printf("%d\n", result);
}