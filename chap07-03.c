#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	int sum = 0 , x = 0;

	while (1)
	{
		printf("숫자를 입력하시오 : ");
		scanf("%d", &num);

		if (num < 0) continue;
		sum += num;
		x++;

		if (x >= 3)
			break;
	}
	printf("\n합계는 %d입니다.\n", sum);

	return 0;

}