///* Q1 �� ������ �ּڰ��� ���մϴ�. */
#include <stdio.h>
int min3(int a, int b, int c)
{
	int min = a;

	if (min > b)
		min = b;
	if (min > c)
		min = c;

}

int main(void)
{
	int a, b, c;

	printf("�� ������ �ּڰ��� ���մϴ�.\n");
	printf("a�� �� : ");	scanf_s("%d", &a);
	printf("b�� �� : ");	scanf_s("%d", &b);
	printf("c�� �� : ");	scanf_s("%d", &c);
	

	printf("�ּڼڰ��� %d�Դϴ�.\n", min3(a, b, c));

}