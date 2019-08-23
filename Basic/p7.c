#include<stdio.h>
main()
{
	int i,j,k=0,l,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(l=n;l>=i;l--)
			printf(" ");
		for(j=1;j<=i+k;j++)
		{
			if(j%2==0)
				printf("A");
			else
				printf("*");
		}
		printf("\n");
		k++;
	}
}
