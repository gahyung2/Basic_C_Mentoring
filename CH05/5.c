#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	int num1;
	int x, y;

	printf("정수를 입력하시오 :");
	scanf("%d", &num1);

	x = num1 / 10;
	y = num1 % 10;

	printf("십의 자리: %d\n", x);
	printf("일의 자리: %d", y);

	return 0;
}