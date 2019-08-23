#include<stdio.h>
#include<stdlib.h>
int linearsearch(int [],int,int);
main()
{
	int a[50];
	int key,n,i;
	system("clear");

	printf("\nEnter no. of elements: ");
	scanf("%d",&n);
	printf("\nEnter %d data\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter the element to be searched:\n");
	scanf("%d",&key);
	linearsearch(a,n,key);
	if(linearsearch(a,n,key)==0)
		printf("\n%d is not found",key);
	else
		printf("\n%d is found",key);
}
int linearsearch(int a[],int n,int key)
{
	int i=0,loc=0;
	while(i<n)
	{
		if(key==a[i])
		{	
			loc=i;
			break;
		}
		i++;
	}
	return(loc);
}
