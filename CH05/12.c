#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char a, b, c, d;
	unsigned int num1;
	printf("첫 번째 문자를 입력하시오 :");
	scanf(" %c", &a);
	printf("두 번째 문자를 입력하시오 :");
	scanf(" %c", &b);
	printf("세 번째 문자를 입력하시오 :");
	scanf(" %c", &c);
	printf("네 번째 문자를 입력하시오 :");
	scanf(" %c", &d);

	num1 = (unsigned int)a;
	num1 |= (unsigned int)b << 8;
	num1 |= (unsigned int)c << 16;
	num1 |= (unsigned int)d << 24;

	printf("결과값:%x",num1);

	return 0;






}