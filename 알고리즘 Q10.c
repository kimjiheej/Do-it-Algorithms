#include<stdio.h>//햇갈렸던 문제
int main(void)
{
	int a, b;
	printf("a의 값: ");
	scanf_s("%d", &a);
	

	while (1)
	{
	
		printf("b의 값: ");
		scanf_s("%d", &b);

		if (a < b)
			break;
		printf("a보다 큰 값을 입력하세요!");

	}
	printf("b-a는 %d입니다.", b - a);


















}