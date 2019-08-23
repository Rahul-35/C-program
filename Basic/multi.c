#include<stdio.h>
main()
{
	int n,i;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{	
		printf("\n%d X %d = %d",n,i,n*i);
	}
}
