#include <stdio.h>
#include <math.h>

int recursive(int n);

int main()
{
	int i;
	
	printf("숫자를 입력하시오 : ");
	scanf("%d", &i);

	recursive(i);
}

// 재귀함수
int recursive(int n)
{
	int i;

	// recursive(0) = 2
	if (n < 1)
	{
		return 2;
	}

	else
	{
		i = (2 * recursive(n - 1) + 1);

		printf("%d\n", i);
		return i;
	}
}