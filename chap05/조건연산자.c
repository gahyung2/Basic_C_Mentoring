#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	

	printf("���� 2�� : ");
	scanf("%d%d", &a, &b);

	printf("ū �� = %d\n",( a > b) ? a : b);
	printf("������=%d", (a > b) ? b : a);

	return 0;
}