#include <stdio.h>

main()
{
	int k, i, j, m;
	int a[99];

	k = 1;

	// ���� ��� ����
	do
	{
		k++;
		a[k - 2] = k;
	}

	while (k < 100);

	i = -1;
	j = 0;

	while (1)
	{
		i++;

		// a[99]�� �Ǹ� ��� �� ����
		if (i > 98)
		{
			printf("%d", j);
			break;
		}

		// a[i]�� 0�̸� �Ҽ��� �ƴϹǷ� �Ѿ
		if (a[i] == 0)
		{
			continue;
		}

		j++;
		m = i;

		while (1)
		{
			// a[i]�� ���
			m += a[i];

			if (m > 98)
			{
				break;
			}

			// a[i]�� ����� �Ҽ��� �ƴϹǷ� 0���� ǥ���� ����
			a[m] = 0;
		}
	}
}