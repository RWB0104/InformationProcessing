#include <stdio.h>

main()
{
	int a = 20;
	int* b;

	// a의 주소값. 컴퓨터에 따라 다르게 표시됨.
	b = &a;
	*b = *b + 10;

	printf("%d %p %d\n", a, b, *b);
}