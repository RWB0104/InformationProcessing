#include <stdio.h>

main()
{
	int q, e, c, t, j;
	int a[9][9] = { 0 };

	q = 0, e = 0, c = 0;
	t = 0, j = 0;

	c = 9 / 2;

	for (int t = 0; t < 9; t++)
	{
		// ���� �߰������� ������ �ʾ��� ���
		if (t < c)
		{
			// ���� �ִ밪 ����
			e = 8 - t;
		}

		// ���� �߰������� ������ ���
		else
		{
			// ���� �ִ밪 ����
			e = t;
		}

		for (j = 0; j <= e; j++)
		{
			q++;
			a[j][t] = q;
		}
	}

	for (int x = 0; x < 9; x++)
	{
		for (int y = 0; y < 9; y++)
		{
			printf("%3d", a[x][y]);
		}

		printf("\n");
	}
}