#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int sec, min, x;

	printf("�ʸ� �Է��Ͻÿ� : ");
	scanf("%d", &x);

	min = x / 60;
	sec = x % 60;

	printf("%d�ʴ� %d�� %d�� �Դϴ�.", x, min, sec);

	return 0;
}