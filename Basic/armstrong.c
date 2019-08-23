//Program to take a number and check its armstrong or not
#include<stdio.h>
#include<math.h>
int main()
{
	int n,d,s=0,m;
	printf("Enter a number:");
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
		d=n%10;
		s=s+pow(d,3);
		n=n/10;
	}
	if(s==m)
		printf("%d is an Armstrong number",m);
	else
		printf("%d is not an Armstrong number",m);
	return(0);
}
