#include <stdio.h>
#include <stdlib.h>

// �������� ����
void BB(b, c);
void CC(a, c);
void DD(c);
int i, j, k;

main()
{
	int a[10] = { 2, 3, 5, 8, 9, 10, 12, 13, 0 };
	int b[10] = { 1, 3, 5, 6, 0 };
	int c[20];

	i = 0;
	j = 0;
	k = -1;

	while (1)
	{
		k++;

		// a ��Ұ� b ��Һ��� ���� ���
		if (a[i] < b[j])
		{
			// a ��� ���
			c[k] = a[i];
			i++;

			// a ��Ұ� 0(��)�� ���
			if (a[i] == 0)
			{
				BB(b, c);
			}
		}

		// a ��ҿ� b ��Ұ� ���� ���
		else if (a[i] == b[j])
		{
			// a ��� ��� (b ��Ҹ� ����ص� ��� ����)
			c[k] = a[i];
			i++;
			j++;

			// a ��Ұ� 0(��)�� ���
			if (a[i] == 0)
			{
				BB(b, c);
			}

			// b ��Ұ� 0(��)�� ���
			else if (b[j] == 0)
			{
				CC(a, c);
			}
		}

		// a ��Ұ� b ��Һ��� Ŭ ���
		else
		{
			// b ��� ���
			c[k] = b[j];
			j++;

			// b ��Ұ� 0(��)�� ���
			if (b[j] == 0)
			{
				CC(a, c);
			}
		}
	}
}

// ���� b�� c ����
void BB(int b[10], int c[10])
{
	// b ��Ұ� 0(��)�� ���
	if (b[j] == 0)
	{
		DD(c);
	}

	// b ��Ұ� 0(��)�� �� ������
	do
	{
		k++;
		c[k] = b[j];
		j++;
	}
	
	while (b[j] != 0);

	DD(c);
}

// ���� a�� c ����
void CC(int a[10], int c[10])
{
	// a ��Ұ� 0(��)�� �� ������
	do
	{
		k++;
		c[k] = a[i];
		i++;
	}
	
	while (a[i] != 0);

	DD(c);
}

// ���� ����
void DD(int c[10])
{
	k++;
	c[k] = 0;

	// ������ ���� ���
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", c[i]);
	}

	// ���α׷� ����
	exit(0);
}