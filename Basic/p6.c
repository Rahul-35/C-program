#include<stdio.h>
main()
{
	int i,j,k=1;
	for(i=1;i<=4;i++)
	{
		for(j=4;j>=i;j--)
		{
			printf(" ");
		}
		for(int l=1;l<=i;l++)
			printf("%d ",k++);
		printf("\n");
	}
}
