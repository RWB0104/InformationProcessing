#include <stdio.h>
#include <math.h>

main()
{
	int dec, p, k;
	int s[8] = { 1, 0, 0, 1, 1, 1, 1, 1 };

	dec = 0;
	p = 1;

	// p = 8�� �� ������
	do
	{
		// ù ��° bit�� ��ȣ�̹Ƿ� ��꿡�� ����
		k = pow(2, (7 - p));
		dec += k * s[p];
		p++;
	}
	
	while (p < 8);

	// ù ��° ��Ʈ�� 1�̸� ����
	if (s[0] != 0)
	{
		dec = 128 - dec;
		dec *= -1;
	}

	printf("%d", dec);
}