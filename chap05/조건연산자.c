#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	

	printf("정수 2개 : ");
	scanf("%d%d", &a, &b);

	printf("큰 수 = %d\n",( a > b) ? a : b);
	printf("작은수=%d", (a > b) ? b : a);

	return 0;
}