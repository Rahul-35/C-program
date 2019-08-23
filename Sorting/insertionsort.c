#include<stdio.h>
#include<stdlib.h>
void sort(int [],int);
main()
{
	int a[50];
	int i,n;
	system("clear");

	printf("\nEnter no. of elements: ");
	scanf("%d",&n);
	printf("\nEnter %d data\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	printf("\nBefore sorting\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	sort(a,n);
	printf("\nAfter sorting\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}
void sort(int a[],int n)
{
	int i,j,x;
	for(i=1;i<n;i++)
	{	
		x=a[i];
		j=i-1;
		while(j>=0 && a[j]>x)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=x;
	}
	return;
}
