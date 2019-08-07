#include <stdio.h>

int main()
{
	int i, j, n;
	n = 7;

	for (int i = 1; i <= n; i++)
	{
		for (j = 1; j <= i ; j++)
		{
			printf("%3d", j);
		}

		printf("\n");
	}
}