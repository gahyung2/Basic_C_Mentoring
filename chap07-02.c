#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int sum;
	sum = 0;
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0) {
			sum += i;
		}
	}
	printf("1���� 100 ������ ��� 3�� ����� ���� %d�Դϴ�.", sum);

	return 0;
}