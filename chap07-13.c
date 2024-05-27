#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, sum;
	a = 0;
	sum = 0;

	while (1){
		a++;
		sum += a;
		if (sum >= 10000)
			break;
	}
	printf("1부터 %d까지의 합이 %d입니다.", (a-1), sum-a);

	return 0;
}