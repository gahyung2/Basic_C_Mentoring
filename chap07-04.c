#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	printf("������ �Է��Ͻÿ� :");
	scanf("%d", &a);

	printf("���: ");
	for (b = 1; b <= a; b++) {
		if (a % b == 0) {
			printf("% d", b);

		}
	}

	return 0;
}