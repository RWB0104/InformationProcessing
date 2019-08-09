#include <stdio.h>

main()
{
	char *str;
	str = "KOREA";

	// 총 8자리의 문자열을 받아 그 중 왼쪽애서 3번째 까지의 문자열 반환
	printf("%8.3s\n", str);
}