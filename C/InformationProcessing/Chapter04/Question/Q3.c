#include <stdio.h>
#include <math.h>

main()
{
	int dec, p, k, s[8];

	// 8bit ������ �Է¹ޱ�
	for (int i = 0; i < 8; i++)
	{
		printf("%d�� ° bit : ", i);
		scanf("%d", &s[i]);
	}

	for (int i = 0; i < 8; i++)
	{
		printf("%d", s[i]);

		if (i == 3)
		{
			printf(" ");
		}
	}

	printf("\n");

	dec = 0;
	p = 1;

	// p = 8�� �� ������
	do
	{
		// ù ��° bit�� ��ȣ�̹Ƿ� ��꿡�� ����
		k = pow(2, 7 - p);
		dec += (k * s[p]);
		p++;
	}
	
	while (p < 8);

	// ù ��° ��Ʈ�� 1�̸� ����
	if (s[0] == 1)
	{
		dec = 128 - dec;
		dec *= -1;
	}

	printf("%d", dec);
}