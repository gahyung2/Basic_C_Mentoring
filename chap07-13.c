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
	printf("1���� %d������ ���� %d�Դϴ�.", (a-1), sum-a);

	return 0;
}