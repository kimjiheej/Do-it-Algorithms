/* 1, 2, ��, n�� ���� ���մϴ�(while��). */
#include <stdio.h>

int main(void)
{
	int i, n;
	int sum;				/* �� */

	puts("1���� n������ ���� ���մϴ�.");
	printf("n�� �� : ");
	scanf_s("%d", &n);

	sum = 0;
	i = 1;

	while (i <= n) {		/* i�� n �����̸� �ݺ��մϴ�. */
		sum += i;			/* sum�� i�� ���մϴ�. */
		i++;				/* i ���� 1 ������ŵ�ϴ�. */
	}

	printf("%d", i);

	return 0;
}