#include <stdio.h>

main()
{
	int m, i, j, k, x;
	int data[10];

	// �迭 ��� �Է�
	for (m = 0; m <= 9; m++)
	{
		scanf("%d", &data[m]);
	}

	// �迭 �� ������ �� �ܰ� �Ʒ����� ��
	for (i = 0; i <= 8; i++)
	{
		// �迭 �� ������ ��
		for (j = i + 1; j <= 9; j++)
		{
			// ���� ��� ũ�Ⱑ �� Ŭ ��� ��ġ ��ü
			if (data[i] > data[j])
			{
				k = data[i];
				data[i] = data[j];
				data[j] = k;
			}
		}
	}

	for (x = 0; x <= 9; x++)
	{
		printf("%d ", data[x]);
	}
}