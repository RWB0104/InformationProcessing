#include <stdio.h>

main()
{
	int m, i, j, k, x;
	int data[10];
	m = -1;

	// �迭 ��� �Է�
	do
	{
		m++;
		scanf("%d", &data[m]);
	}
	
	while (m < 9);

	i = -1;

	// �迭 �� ������ �� �ܰ� �Ʒ����� ��
	do
	{
		i++;
		j = i;

		// �迭 �� ������ ��
		do
		{
			j++;

			// ���� ��� ũ�Ⱑ �� Ŭ ��� ��ġ ��ü
			if (data[i] > data[j])
			{
				k = data[i];
				data[i] = data[j];
				data[j] = k;
			}
		}
		
		while (j < 9);
	}
	
	while (i < 8);

	for (x = 0; x <= 9; x++)
	{
		printf("%d ", data[x]);
	}
}