#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double a, b, c;
	double x, y;

	printf("�Ÿ��� �Է��Ͻÿ� :");
	scanf("%lf", &a);

	printf("������ �Է��Ͻÿ� :");
	scanf("%lf", &b);

	x = (a / b) * 360;
	y = x / 2 * 3.14159;

	printf("������ �������� %lf�Դϴ�.", y);

	return 0;
}