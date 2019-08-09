#include <stdio.h>

main()
{
	int a = 5, b = 7, c, d, e, f;

	// AND 연산
	c = a & b;

	// OR 연산
	d = a | b;

	// XOR 연산
	e = a ^ b;

	// NOT 연산
	f = ~b;
	
	// 우측으로 1만큼 비트 이동
	a = a >> 1;

	// 좌측으로 3만큼 비트 이동
	b = b << 3;

	printf("%d, %d, %d, %d, %d, %d\n", a, b, c, d, e, f);
}