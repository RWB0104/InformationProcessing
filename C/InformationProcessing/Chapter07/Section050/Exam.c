#define LENGTH 10
#include <stdio.h>
#include <string.h>

struct member
{
	char n[10];
	int p, pm[10];
};

main()
{
	FILE *inf;
	
	inf = fopen("data1.txt", "r");

	struct member data;
	int tm[10], k, t, m, sw;

	printf("\t\t\t\t����� ����ǥ\n");
	printf("���� ��������޾� ���� �ϸ� ��õ ��õ ���� �Ϲ� ���� �Ͻ� �� ��\n");

	for (k = 0; k < LENGTH - 1; k++)
	{
		tm[k] = data.pm[k] = 0;
	}

	fscanf(inf, "%s %d", &data.n, &data.p);

	do
	{
		t = data.p;
		m = 50000;
		sw = 1;

		for (k = 0; k < LENGTH - 1; k++)
		{
			data.pm[k] = t / m;
			t -= data.pm[k] * m;

			if (sw == 1)
			{
				m /= 5;
				sw = 0;
			}

			else
			{
				m /= 2;
				sw = 1;
			}
		}

		printf("%s %d", data.n, data.p);

		for (k = 0; k < LENGTH - 1; k++)
		{
			printf("%5d", data.pm[k]);
			tm[k] += data.pm[k];
		}

		printf("\n");

		fscanf(inf, "%s %d", &data.n, &data.p);
	}
	
	while (strcmp(data.n, "quit") != 0);

	printf("��ü ȭ�� �ż�");

	for (k = 0; k < LENGTH - 1; k++)
	{
		printf("%5d", tm[k]);
	}

	fclose(inf);
}