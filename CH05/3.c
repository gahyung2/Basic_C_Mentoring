#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1, num2, num3;
	int max;

	printf("���� 3���� �Է��Ͻÿ� :");
	scanf("%d %d %d", &num1, &num2, &num3);

	max = num1 > num2 ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);
	printf("�ִ밪�� %d�Դϴ�.", max);

	return 0;
}