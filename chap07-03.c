#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	int sum = 0 , x = 0;

	while (1)
	{
		printf("���ڸ� �Է��Ͻÿ� : ");
		scanf("%d", &num);

		if (num < 0) continue;
		sum += num;
		x++;

		if (x >= 3)
			break;
	}
	printf("\n�հ�� %d�Դϴ�.\n", sum);

	return 0;

}