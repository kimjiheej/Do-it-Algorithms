#include<stdio.h>
int sumof(int a, int b);
int main(void)
{
	

	int num1, num2;


	scanf_s("%d %d", &num1, &num2);
	printf("%d", sumof(num1, num2));







}
int sumof(int a, int b)
{
	int total = 0;
	for (int i = a; i <= b; i++)
		total += i;

	return total;

}