#include <stdio.h>
int prime_Number(int digit)
{
	int i;
	int a;
	int is_Prime;
	for(a=2; a<=digit; a++)
	{
		is_Prime=1;
		for (i=2; i*i<=digit; i++)
		{
			if(digit%i==0)
			{
				is_Prime=0;
			}
		}
	}
		if(is_Prime==1)
		{
			printf("%d Is a Prime Number.", digit);
			printf("\n");
		}
		else
		{
			printf("%d Is Not a Prime Number.", digit);
			printf("\n");
		}
}
int main(void)
{
	int number;
	int prime;
	printf("Enter a Number to determine whether it's a Prime Number or Not: ");
	scanf("%d", &number);
	printf("\n");
	prime=prime_Number(number);
	printf("\n");
	return 0;
}