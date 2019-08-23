#include<stdio.h>
main(){
	int i,j,k,n;
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
			printf(" ");
		for(k=1;k<=i;k++)
			printf("*");
		printf("\n");
	}	
}
