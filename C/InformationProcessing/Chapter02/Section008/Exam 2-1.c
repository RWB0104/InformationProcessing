#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

main()
{
	// 2의 3승
	printf("%f\n", pow(2, 3));

	// 25의 제곱근
	printf("%f\n", sqrt(25));

	// -20의 절대값
	printf("%d\n", abs(-20));

	char a[] = "ad";
	char b[] = "ac";

	// a와 b의 문자열 비교
	printf("%d\n", strcmp(a, b));

	// b를 a로 복사
	strcpy(a, b);
	printf("%d\n", strcmp(a, b));

	char c[] = "123";
	char d[] = "456";

	// 문자열을 정수형으로 변환
	printf("%d\n", atoi(c) + atoi(d));

	char e[] = "12.3";
	char f[] = "45.6";

	// 문자열을 실수로 변환
	printf("%f\n", atof(e) + atof(f));
}