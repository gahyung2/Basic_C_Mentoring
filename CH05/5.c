#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	int num1;
	int x, y;

	printf("������ �Է��Ͻÿ� :");
	scanf("%d", &num1);

	x = num1 / 10;
	y = num1 % 10;

	printf("���� �ڸ�: %d\n", x);
	printf("���� �ڸ�: %d", y);

	return 0;
}