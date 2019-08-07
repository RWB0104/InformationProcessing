#include <stdio.h>

int sub(int i, int j)
{
	return i - j;
}

int add(int i, int j)
{
	return i + j;
}

main()
{
	int i, j, result;
	int (*pf)(int, int);

	scanf("%d, %d", &i, &j);

	// 함수의 주소 지정
	pf = add;
	result = pf(i, j);
	printf("%d", result);

	pf = sub;
	result = pf(i, j);
	printf("%d", result);
}