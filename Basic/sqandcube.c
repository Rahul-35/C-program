#include<stdio.h>
int square(int);
int cube(int);
int main()
{
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	printf("The Square of %d is: %d",a,square(a));
	printf("\nThe Cube of %d is: %d",a,cube(a));
	return(0);
}
int square(int n)
{
	return(n*n);
}
int cube(int n)
{
	return(n*n*n);
}
