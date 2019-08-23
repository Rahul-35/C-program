#include<stdio.h>
main()
{
	int i,n,s=0,p=0;
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		p=p*10+1;
		if(i<5)
			printf("%d + ",p);
		else
			printf("%d ",p);
		s=s+p;
	}
	printf("\nThe Sum is: %d",s);
}
