#include <stdio.h>

// �Ҽ� �Ǻ� �Լ�
int isprime(int number)
{
	int i;

	// 2���� number ������ ����
	for (i = 2; i < number; i++)
	{
		// number�� �������� �Ҽ��� �ƴ�
		if (number % i == 0)
		{
			return 0;
		}
	}

	// �������� ������ �Ҽ�
	return 1;
}

int	main()
{
	int number = 100, cnt = 0, i;

	// isprime�� �̿��� �Ҽ��� ���� ���
	for (i = 2; i < number; i++)
	{
		cnt += isprime(i);
	}

	printf("%d�� ���� �ʴ� �Ҽ��� %d�� �Դϴ�.\n", number, cnt);

	return 0;
}