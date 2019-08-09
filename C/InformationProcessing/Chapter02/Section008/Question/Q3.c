#include <stdio.h>

int res10()
{
	return 4;
}

int res30()
{
	return 30 + res10();
}

int res200()
{
	return 200 + res30();
}

int main()
{
	int result;
	result = res200();

	printf("%d\n", result);
}