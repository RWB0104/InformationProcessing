#include <stdio.h>

main()
{
	int a, b, big, small, mok, nmg, gcm, lcm;

	scanf("%d %d", &a, &b);

	// a�� b���� Ŭ ���
	if (a >= b)
	{
		big = a;
		small = b;
	}

	// a�� b���� ���� ���
	else
	{
		big = b;
		small = a;
	}

	while (1)
	{
		mok = big / small;
		nmg = big - mok * small;

		// �������� 0�� ���
		if (nmg == 0)
		{
			gcm = small;
			lcm = a * b / gcm;

			printf("%d %d", gcm, lcm);
			
			break;
		}

		// small�� big����, �������� small�� ����
		big = small;
		small = nmg;
	}
}