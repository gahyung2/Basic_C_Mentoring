#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double r, a, b;
	const double p = 3.14159;

	printf("���� �������� �Է��Ͻÿ�:");
	scanf("%lf",&r);

	a = 4 * p * r * r;
	printf("ǥ������ %lf�Դϴ�.", a);

	b = (4.0 / 3.0) * p * r * r * r;
	prinf("ü���� %lf�Դϴ�.", b);

	return 0;


}