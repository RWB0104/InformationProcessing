#include <stdio.h>
#include <math.h>

main()
{
	int dec, p, k, s[8];

	// 8bit 이진수 입력받기
	for (int i = 0; i < 8; i++)
	{
		printf("%d번 째 bit : ", i);
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

	// p = 8이 될 때까지
	do
	{
		// 첫 번째 bit는 부호이므로 계산에서 제외
		k = pow(2, 7 - p);
		dec += (k * s[p]);
		p++;
	}
	
	while (p < 8);

	// 첫 번째 비트가 1이면 음수
	if (s[0] == 1)
	{
		dec = 128 - dec;
		dec *= -1;
	}

	printf("%d", dec);
}