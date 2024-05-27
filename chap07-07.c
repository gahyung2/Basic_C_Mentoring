#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;

	for (a = 0; a < 7; a++){
		for (b = 0; b <(6-a); b++)
				printf(" ");

		for (b= 6 - a; b < 7; b++)
			printf("*");

		printf("\n");

	}

	return 0;
}