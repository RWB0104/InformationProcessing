#include <stdio.h>

main()
{
	int i, j, k, nmg, a[5][5] = { 0 };

	i = 0, k = 0;
	j = 5 / 2;

	do
	{
		k++;
		a[i][j] = k;
		nmg = k % 5;

		// 5�� ����� ���
		if (nmg == 0)
		{
			// �� �Ѵܰ� ����
			i++;
		}

		else
		{
			i--;
			j++;

			// i�� 0���� ���� ���
			if (i < 0)
			{
				// �� 4�� ��ȯ
				i = 4;
			}

			// j�� 4���� Ŭ ���
			if (j > 4)
			{
				// �� 0���� ��ȯ
				j = 0;
			}
		}
	}
	while (k < 25);

	for (int x = 0; x < 5; x++)
	{
		for (int y = 0; y < 5; y++)
		{
			printf("%3d", a[x][y]);
		}

		printf("\n");
	}
}