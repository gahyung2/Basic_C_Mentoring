#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	int result, result2;

	printf("정수 2개 : ");
	scanf("%d%d", &a, &b);


	result = (a > b) ? a : b;
	printf("큰수=%d\n", result);

	result2 = (a > b) ? b : a;
	printf("작은수=%d", result2);

	return 0;
}