#include<stdio.h>
int fact(int);
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("The Factorial of %d is : %d\t",n,fact(n));
	return(0);
}
int fact(int a)
{
	int f=1;
	for(int i=1;i<=a;i++)
		f=f*i;
	return(f);
}
