#include<stdio.h>//�ް��ȴ� ����
int main(void)
{
	int a, b;
	printf("a�� ��: ");
	scanf_s("%d", &a);
	

	while (1)
	{
	
		printf("b�� ��: ");
		scanf_s("%d", &b);

		if (a < b)
			break;
		printf("a���� ū ���� �Է��ϼ���!");

	}
	printf("b-a�� %d�Դϴ�.", b - a);


















}