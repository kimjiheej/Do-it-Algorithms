#include<stdio.h>
int main(void)
{


	int num;
	int k, j;
	int i = 0;
	scanf_s("%d", &num);
	
	
	
	do {

		j = num / 10;
		num = j;
		i++;



	} while (j != 0);

	printf("%d 자리수이다", i);












}