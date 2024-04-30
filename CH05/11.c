#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double a, b, c;
	double x, y;

	printf("거리를 입력하시오 :");
	scanf("%lf", &a);

	printf("각도를 입력하시오 :");
	scanf("%lf", &b);

	x = (a / b) * 360;
	y = x / 2 * 3.14159;

	printf("지구의 반지름은 %lf입니다.", y);

	return 0;
}