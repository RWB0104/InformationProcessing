#include <stdio.h>

main()
{
	int n, c, k, y, s[20];

	while (1)
	{
		// ���μ������� �� �Է�
		scanf("%d", &n);

		// �Է��� ���� 2 �̻��� ���
		if (n >= 2)
		{
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
				for (y = 0; y < c; y++)
				{
					printf("%dx", s[y]);
				}

				printf("%d\n", s[c]);
			}
		}
		
		// n�� 2 �̻��� �ƴϸ� ���μ����� �Ұ���
		else
		{
			break;
		}
	}
}