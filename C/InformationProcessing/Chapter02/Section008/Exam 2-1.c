#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

main()
{
	// 2�� 3��
	printf("%f\n", pow(2, 3));

	// 25�� ������
	printf("%f\n", sqrt(25));

	// -20�� ���밪
	printf("%d\n", abs(-20));

	char a[] = "ad";
	char b[] = "ac";

	// a�� b�� ���ڿ� ��
	printf("%d\n", strcmp(a, b));

	// b�� a�� ����
	strcpy(a, b);
	printf("%d\n", strcmp(a, b));

	char c[] = "123";
	char d[] = "456";

	// ���ڿ��� ���������� ��ȯ
	printf("%d\n", atoi(c) + atoi(d));

	char e[] = "12.3";
	char f[] = "45.6";

	// ���ڿ��� �Ǽ��� ��ȯ
	printf("%f\n", atof(e) + atof(f));
}