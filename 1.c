#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double num1;

	printf("�Ǽ��� �Է��Ͻÿ�:");
	scanf("%lf", &num1);

	printf("�Ǽ��������δ� %lf\n", num1);
	printf("�����������δ� %e", num1);

	return 0;
}