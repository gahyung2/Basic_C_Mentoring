#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char a, b, c, d;
	unsigned int num1;
	printf("ù ��° ���ڸ� �Է��Ͻÿ� :");
	scanf(" %c", &a);
	printf("�� ��° ���ڸ� �Է��Ͻÿ� :");
	scanf(" %c", &b);
	printf("�� ��° ���ڸ� �Է��Ͻÿ� :");
	scanf(" %c", &c);
	printf("�� ��° ���ڸ� �Է��Ͻÿ� :");
	scanf(" %c", &d);

	num1 = (unsigned int)a;
	num1 |= (unsigned int)b << 8;
	num1 |= (unsigned int)c << 16;
	num1 |= (unsigned int)d << 24;

	printf("�����:%x",num1);

	return 0;






}