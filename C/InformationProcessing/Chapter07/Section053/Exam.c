#include <stdio.h>
#include <string.h>

struct member
{
	char ban[4];
	int bunho, wgt;
};

main()
{
	struct member data[100];
	int flag, a, b, i, k;
	char c[4];

	printf("�� ��ȣ ���Ը� �Է��ϼ���.\n��� �Է��ϼ����� '0 0 0'�� �Է��ϼ���.\n");
	
	flag = 0;
	i = k = -1;

	do
	{
		k++;

		scanf("%s %d %d", data[k].ban, &data[k].bunho, &data[k].wgt);
	}
	
	while (data[k].bunho != 0);

	printf("��\t��ȣ\tü��\n");

	while (i < k - 1)
	{
		i++;

		if (flag == 0)
		{
			flag = 1;
			a = data[i].wgt;
			b = data[i].wgt;
		}

		else if (a > data[i].wgt)
		{
			a = data[i].wgt;
		}

		else if (b < data[i].wgt)
		{
			b = data[i].wgt;
		}

		if (strcmp(c, data[i].ban) == 0)
		{
			printf("	\t%d\t%d\n", data[i].bunho, data[i].wgt);
			continue;
		}

		strcpy(c, data[i].ban);
		printf("%s\t%d\t%d\n", data[i].ban, data[i].bunho, data[i].wgt);
	}

	printf("�ּ� ü�� : %d\n", a);
	printf("�ִ� ü�� : %d", b);
}