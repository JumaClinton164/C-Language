#include <stdio.h>
int x=1;
void use_Local(void)
{
	int x=25;
	printf("Local x in use_Local is %d after entering use_Local.", x);
	printf("\n");
	++x;
	printf("Local x in use_Local is %d before exiting use_Local.", x);
	printf("\n");
}
void useStatic_Local(void)
{
	static int x=50;
	printf("\n");
	printf("Local Static x is %d on entering useStatic_Local", x);
	printf("\n");
	++x;
	printf("Local Static x is %d on exiting useStatic_Local.", x);
	printf("\n");
}
void use_Global(void)
{
	printf("Global x is %d on entering use_Global.", x);
	printf("\n");
	x*=10;
	printf("Global x is %d on exiting use_Global.", x);
	printf("\n");
}
int main(void)
{
	int x=5;
	printf("Local x in outer scope of main is %d.", x);
	printf("\n");
	{
		int x=7;
		printf("Local x in the inner scope of the main is %d.", x);
		printf("\n");
	}
	printf("Local x in the outer scope of main is %d.", x);
	printf("\n");
	use_Local();
	useStatic_Local();
	use_Global();
	useStatic_Local();
	use_Global();
	use_Local();
	printf("Local x in main is %d.", x);
	printf("\n");
	return 0;
}