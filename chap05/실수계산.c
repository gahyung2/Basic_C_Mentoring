#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	int x, result;
	double y;

	printf("수를 입력하시오");
	scanf("%d%lf", &x, &y);

	result = x + y;
	printf("%d + %lf = %d", x,y,result);


	return 0;

}
