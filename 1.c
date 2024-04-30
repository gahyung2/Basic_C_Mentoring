#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double num1;

	printf("실수를 입력하시오:");
	scanf("%lf", &num1);

	printf("실수형식으로는 %lf\n", num1);
	printf("지수형식으로는 %e", num1);

	return 0;
}