#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	int result, result2;

	printf("���� 2�� : ");
	scanf("%d%d", &a, &b);


	result = (a > b) ? a : b;
	printf("ū��=%d\n", result);

	result2 = (a > b) ? b : a;
	printf("������=%d", result2);

	return 0;
}