#include <stdio.h>

main()
{
	int n, c, k, y;
	int s[20];

	while (1)
	{
		// ���μ������� �� �Է�
		scanf("%d", &n);

		// n���� ���� ���� ���μ����ذ� �Ұ���
		if (n < 2)
		{
			break;
		}

		c = -1;

		// n�� 1�� �� ������
		do
		{
			// ����
			k = 2;

			// n�� k�� ������ ������ ������
			while (n % k != 0)
			{
				k++;
			}

			c++;
			s[c] = k;
			n /= k;
		}

		while (n != 1);

		// c�� �� ���� �������� ���
		if (c == 0)
		{
			printf("�Ҽ�\n");
		}

		else
		{
			for (y = 0; y <= c - 1; y++)
			{
				printf("%dX", s[y]);
			}

			printf("%d", s[c]);
		}
	}
}