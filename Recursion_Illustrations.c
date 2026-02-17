#include <stdio.h>
int factorial(int n)
{
	if(n==0 || n==1)
	{
		return 1;
	}
	else
	{
		return n*factorial(n-1);
	}
}
int fibonacci_Series(int n)
{
	if(n==0)
	{
		return 0;
	}
	else
	if(n==1 || n==2)
	{
		return 1;
	}
	else
	{
		return fibonacci_Series(n-2)+fibonacci_Series(n-1);
	}
}
int main(void)
{
	int digit;
	int fact;
	int fibo;
	printf("Enter a Number whose Factorial and Fibonacci is to be determined: ");
	scanf("%d", &digit);
	printf("\n");
	fact=factorial(digit);
	fibo=fibonacci_Series(digit);
	printf("The Factorial of the Number is: %d",fact);
	printf("\n");
	printf("The Fibonacci_Series of the Number is: %d", fibo);
	return 0;
}