#include <stdio.h>

main()
{
	int a = 20;
	int* b;

	// a�� �ּҰ�. ��ǻ�Ϳ� ���� �ٸ��� ǥ�õ�.
	b = &a;
	*b = *b + 10;

	printf("%d %p %d\n", a, b, *b);
}