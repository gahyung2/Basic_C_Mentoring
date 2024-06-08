#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int x, y; //물건값과 투입한 금액 
	int result,re1000, re500, re100;  //천 원권, 오백 원 동전, 백 원 동전 

	printf("물건 값을 입력하시오 : ");
	scanf("%d", &x);

	printf("투입한 금액을 입력하시오 : ");
	scanf("%d", &y);

	result = y - x;

	re1000 = result / 1000;
	result = result % 1000;

	re500 = result / 500;
	result = result % 500;

	re100 = result / 100;
	result = result % 100;

	printf("거스름돈은 다음과 같습니다. ");
	printf("천원권 : %d장 ",re1000);
	printf("오백원 동전 : %d개 ", re500);
	printf("백원 동전 : % d게 ", re100);
	return 0;
}