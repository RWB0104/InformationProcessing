#include <stdio.h>

// ���� ����
#define MAX 5

// �������� ����
int Stack[MAX];
int Top = -1;

// Stack�� �ڷ� ����
int push(int ii)
{
	Top++;

	// Top�� �ִ밪���� ���� ���
	if (Top >= MAX)
	{
		printf("Overflow\n");

		Top--;
		return -1;
	}

	Stack[Top] = ii;

	return 0;
}

// Stack���� �ڷ� ���
int pop(void)
{
	int r;

	// Top�� �ּҰ����� ���� ���
	if (Top < 0)
	{
		printf("Underflow\n");
		return -1;
	}

	r = Stack[Top];
	Top--;

	return r;
}

main()
{
	while (1)
	{
		int i, j, k;

		printf("�۾��� �����ϼ���. : ");
		scanf("%d", &j);

		// j = 1 : push
		if (j == 1)
		{
			printf("������ ���ڸ� �Է��ϼ���. : ");
			scanf("%d", &k);

			i = push(k);

			// Overflow�� ��� ����
			if (i == -1)
			{
				break;
			}
		}

		// j = 2 : pop
		else if (j == 2)
		{
			i = pop();

			// Underflow�� ��� ����
			if (i == -1)
			{
				break;
			}

			else
			{
				printf("������ �ڷ�� %d�Դϴ�.\n", i);
			}
		}

		else
		{
			break;
		}
	}

	if (Top < 0)
	{
		printf("���ÿ� �ڷᰡ �����ϴ�.\n");
	}

	else
	{
		printf("������ �ڷ�� ������ �����ϴ�.\n");

		for (int i = Top; i >= 0; i--)
		{
			printf("%10d\n", Stack[i]);
		}
	}
}