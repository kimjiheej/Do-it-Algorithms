///* Q3 네 정수의 최솟값을 구합니다. */
#include <stdio.h>
int min4(int a, int b, int c, int d)
{
	int min;

	min = a;

	if (min > b)
		min = b;
	if (min > c)
		min = c;
	if (min > d)
		min = d;
	
	return min;

}

int main(void)
{
	int a, b, c, d;

	printf("네 정수의 최솟값을 구합니다.\n");
	printf("a의 값 : ");	scanf_s("%d", &a);
	printf("b의 값 : ");	scanf_s("%d", &b);
	printf("c의 값 : ");	scanf_s("%d", &c);
	printf("d의 값 : ");	scanf_s("%d", &d);

	printf("최솟값은 %d입니다.\n", min4(a, b, c, d));

}