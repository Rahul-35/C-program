#include<stdio.h>
main()
{
	int i,s=0,n;
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d ",i);
		s=s+i;
	}
		printf("\nSum: %d",s);
	
}
