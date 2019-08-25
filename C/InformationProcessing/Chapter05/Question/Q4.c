#include <stdio.h>
#include <string.h>

main()
{
	FILE *inf;

	inf = fopen("data01.txt", "r");
	char name[10];
	int kor, mat, eng, cnt, i, j;

	char irum[50];
	int jumsu[50], rank[50];

	cnt = -1;

	while (1)
	{
		cnt++;

		if (fscanf(inf, "%s %d %d %d", name, &kor, &mat, &eng) == EOF)
		{
			break;
		}

		jumsu[cnt] = kor + mat + eng;
		strcpy(irum[cnt], name);
	}

	cnt--;
	i = 0;

	while (i <= cnt)
	{
		rank[i] = 1;
		i++;

		while (j <= cnt)
		{
			if (jumsu[i] < jumsu[j])
			{
				rank[i]++;
			}

			j++;
		}

		i++;
	}

	for (int x = 0; x <= cnt; x++)
	{
		printf("%s %d %d\n", irum[x], jumsu[x], rank[x]);
	}

	fclose(inf);
}