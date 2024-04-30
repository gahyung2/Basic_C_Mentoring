#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double r, a, b;
	const double p = 3.14159;

	printf("구의 반지름을 입력하시오:");
	scanf("%lf",&r);

	a = 4 * p * r * r;
	printf("표면적은 %lf입니다.", a);

	b = (4.0 / 3.0) * p * r * r * r;
	prinf("체적은 %lf입니다.", b);

	return 0;


}