#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double C, F;

	printf("ȭ���µ��� �Է��Ͻÿ� : ");
	scanf("%lf", &F);

	C = 5 / 9 * (F - 32);

	printf("�����µ��� %lf�Դϴ�.", C);

	return 0;

}