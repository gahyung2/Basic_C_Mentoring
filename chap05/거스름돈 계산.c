#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int x, y; //���ǰ��� ������ �ݾ� 
	int result,re1000, re500, re100;  //õ ����, ���� �� ����, �� �� ���� 

	printf("���� ���� �Է��Ͻÿ� : ");
	scanf("%d", &x);

	printf("������ �ݾ��� �Է��Ͻÿ� : ");
	scanf("%d", &y);

	result = y - x;

	re1000 = result / 1000;
	result = result % 1000;

	re500 = result / 500;
	result = result % 500;

	re100 = result / 100;
	result = result % 100;

	printf("�Ž������� ������ �����ϴ�. ");
	printf("õ���� : %d�� ",re1000);
	printf("����� ���� : %d�� ", re500);
	printf("��� ���� : % d�� ", re100);
	return 0;
}