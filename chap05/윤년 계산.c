#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int year, x;

	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &year);
	
	x = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);

	printf("���� ����=%d",x);

	return 0;

}