#include <stdio.h>

struct sawon
{
	char name[10];
	char jikwi[10];
	int pay;
};

struct sawon data;

main()
{
	printf("�̸� : ");
	scanf("%s", data.name);

	printf("���� : ");
	scanf("%s", data.jikwi);

	printf("�޿� : ");
	scanf("%d", &data.pay);

	printf("\n\n");

	printf("�̸� : %s\n", data.name);
	printf("���� : %s\n", data.jikwi);
	printf("�޿� : %d\n", data.pay);
}