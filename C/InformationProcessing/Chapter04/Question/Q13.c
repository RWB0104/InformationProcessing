#include <stdio.h>

main()
{
	int num;
	int totodd = 0, toteven = 0, tot10su = 0;

	num = 99;

	while (1)
	{
		num++;

		// num�� 500�� ���� ��� ��� ��� �� ����
		if (num > 500)
		{
			printf("%d %d %d", totodd, toteven, tot10su);
			break;
		}

		else
		{
			// num�� ¦���� ��
			if (num % 2 == 0)
			{
				toteven += num;

				// num�� 10�� ����� ��
				if (num % 10 == 0)
				{
					tot10su += num;
				}
			}

			// num�� Ȧ���� ��
			else
			{
				totodd += num;
			}
		}
	}
}