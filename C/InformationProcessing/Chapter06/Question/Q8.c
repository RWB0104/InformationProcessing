#include <stdio.h>

main()
{
	int k, i, j, n;
	int a[5][5] = { 0 };

	k = 0, i = j = -1;
	n = -1;

	while (1)
	{
		i++;
		n *= -1;

		// 4�� �̻��� ���
		if (i > 4)
		{
			break;
		}

		while (1)
		{
			j += n;
			k++;
			a[i][j] = k;

			// 2, 4�� ° ���� ���
			if (i % 2 == 0)
			{
				// ���� 4���� ���� ���
				if (j < 4)
				{
					continue;
				}

				// �ƴ� ���
				else
				{
					j++;
					break;
				}
			}

			// �ƴ� ���
			else
			{
				// ù ��° �ຸ�� Ŭ ���
				if (j > 0)
				{
					continue;
				}

				// �ƴ� ���
				else
				{
					j = -1;
					break;
				}
			}
		}
	}

	for (int x = 0; x <= 4; x++)
	{
		for (int y = 0; y <= 4; y++)
		{
			printf("%3d", a[x][y]);
		}

		printf("\n");
	}
}