/* 1, 2, ��, n�� ���� ���մϴ�(for��). */
#include <stdio.h>

int main(void)
{
	int i, n;
	int sum;					/* �� */
	puts("1���� n������ ���� ���մϴ�.");
	printf("n �� : ");
	scanf_s("%d", &n);

	sum = 0;

	for (i = 1; i <= n; i++){

		if (i == n)
			printf("%d", n);
		else
			printf("%d + ", i);

		sum += i;
			
	}
	printf(" =%d", sum);
	

	return 0;
}