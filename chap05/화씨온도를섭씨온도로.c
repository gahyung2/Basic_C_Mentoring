#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double C, F;

	printf("화씨온도를 입력하시오 : ");
	scanf("%lf", &F);

	C = 5 / 9 * (F - 32);

	printf("섭씨온도는 %lf입니다.", C);

	return 0;

}