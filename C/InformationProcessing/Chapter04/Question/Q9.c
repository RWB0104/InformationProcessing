#include <stdio.h>
#include <math.h>

main()
{
	int p = 2;
	int n = 3;

	while (1)
	{
		// �Ҽ��� �Ǻ��� �� �ڽ��� �����ٱ����� ������ ��
		double t = sqrt(n);
		int m = (int)t;

		// r�� 2 ���� m���� ����
		for (int i = 2; i <= m; i++)
		{
			int r = n % i;

			// ������ ��� �Ҽ��� �ƴ�
			if (r == 0)
			{
				break;
			}

			// �ڱ� �ڽ����θ� �������� �Ҽ�
			if (i == m)
			{
				p = n;
			}
		}

		n++;

		// n�� 100 �ʰ��� ����
		if (n > 100)
		{
			break;
		}
	}

	printf("%d\n", p);
}