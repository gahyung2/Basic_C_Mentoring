#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int x, y;

	x = 1;
	printf("수식 x+1의 값은 %d\n", x + 1);
	printf("수식 y=x+1의 값은 %d\n", y = x + 1);
	printf("수식 y=10+(x=2+7)의 값은 %d\n", y = 10+(x = 2 + 7));
	printf("수식 y=x=3의 값은 %d\n", y = x = 3);

	return 0;
}