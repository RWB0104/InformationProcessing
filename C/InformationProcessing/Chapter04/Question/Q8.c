#include <stdio.h>

main()
{
	int num[10];
	int min = 9999;
	int i;

	// ���� �� �Է�
	for (i = 0; i < 10; i++)
	{
		printf("%d�� ° �� : ", i);
		scanf("%d", &num[i]);
	}

	// �� ��
	for (i = 0; i < 10; i++)
	{
		// �ּҰ����� �񱳰��� ������ ġȯ
		if (min > num[i])
		{
			min = num[i];
		}
	}

	printf("���� ���� ���� %d�̴�.", min);
}