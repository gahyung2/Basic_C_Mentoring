#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	printf("정수를 입력하시오 :");
	scanf("%d", &a);

	printf("약수: ");
	for (b = 1; b <= a; b++) {
		if (a % b == 0) {
			printf("% d", b);

		}
	}

	return 0;
}