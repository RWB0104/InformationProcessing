#include <stdio.h>

// 정의 선언
#define MAX 5

// 전역변수 선언
int Stack[MAX];
int Top = -1;

// Stack에 자료 삽입
int push(int ii)
{
	Top++;

	// Top이 최대값보다 높을 경우
	if (Top >= MAX)
	{
		printf("Overflow\n");

		Top--;
		return -1;
	}

	Stack[Top] = ii;

	return 0;
}

// Stack에서 자료 출력
int pop(void)
{
	int r;

	// Top이 최소값보다 낮을 경우
	if (Top < 0)
	{
		printf("Underflow\n");
		return -1;
	}

	r = Stack[Top];
	Top--;

	return r;
}

main()
{
	while (1)
	{
		int i, j, k;

		printf("작업을 선택하세요. : ");
		scanf("%d", &j);

		// j = 1 : push
		if (j == 1)
		{
			printf("삽입할 숫자를 입력하세요. : ");
			scanf("%d", &k);

			i = push(k);

			// Overflow일 경우 종료
			if (i == -1)
			{
				break;
			}
		}

		// j = 2 : pop
		else if (j == 2)
		{
			i = pop();

			// Underflow일 경우 종료
			if (i == -1)
			{
				break;
			}

			else
			{
				printf("제거한 자료는 %d입니다.\n", i);
			}
		}

		else
		{
			break;
		}
	}

	if (Top < 0)
	{
		printf("스택에 자료가 없습니다.\n");
	}

	else
	{
		printf("스택의 자료는 다음과 같습니다.\n");

		for (int i = Top; i >= 0; i--)
		{
			printf("%10d\n", Stack[i]);
		}
	}
}