#include <stdio.h>

main()
{
	int a = 5, b = 7, c, d, e, f;

	// AND ����
	c = a & b;

	// OR ����
	d = a | b;

	// XOR ����
	e = a ^ b;

	// NOT ����
	f = ~b;
	
	// �������� 1��ŭ ��Ʈ �̵�
	a = a >> 1;

	// �������� 3��ŭ ��Ʈ �̵�
	b = b << 3;

	printf("%d, %d, %d, %d, %d, %d\n", a, b, c, d, e, f);
}