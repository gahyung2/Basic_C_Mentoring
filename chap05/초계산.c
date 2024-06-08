#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int sec, min, x;

	printf("초를 입력하시오 : ");
	scanf("%d", &x);

	min = x / 60;
	sec = x % 60;

	printf("%d초는 %d분 %d초 입니다.", x, min, sec);

	return 0;
}