#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct member
{
	char bu[5], irum[10];
	int bon, su;
};

main()
{
	FILE *inf, *ouf;

	inf = fopen("data2.txt", "r");
	ouf = fopen("result2.txt", "w");

	struct member data;
	int gtot, butot, keb;
	char bubi[5];

	gtot = 0;

	fprintf(ouf, "\t\t��� �޿�ǥ\n");
	fprintf(inf, "�μ�\t����\t����\t����\t�հ�\n");
	fscanf(inf, "%s %s %d %d", &data.bu, &data.irum, &data.bon, &data.su);

	while (1)
	{
		butot = 0;
		strcpy(bubi, data.bu);

		do
		{
			keb = data.bon + data.su;
			butot += keb;

			fprintf("%s\t%s\t%d\t%d\t%d\n", data.bu, data.irum, data.bon, data.su, keb);

			if (fscanf(inf, "%s %s %d %d", &data.bu, &data.irum, &data.bon, &data.su) == EOF)
			{
				gtot += butot;

				fprintf(ouf, "�μ� �հ� : %d\n", butot);
				fprintf(ouf, "��ü �հ� : %d\n", gtot);

				fclose(ouf);
				fclose(inf);

				exit(0);
			}
		}
		
		while (strcmp(bubi, data.bu) == 0);

		gtot += butot;

		fprintf(ouf, "�μ� �հ� : %d\n", butot);
	}
}