#include<stdio.h>
#include<stdlib.h>
void quicksort(int [],int,int);
int partition(int[],int,int);
main()
{
	int a[50];
	int i,n,p,r;
	system("clear");

	printf("\nEnter no. of elements: ");
	scanf("%d",&n);
	printf("\nEnter %d data\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	printf("\nBefore sorting\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	
	p=0;
	r=n-1;
	quicksort(a,p,r);
	
	printf("\nAfter sorting\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}
	
	
void quicksort(int a[],int p,int r)
{
	int q;
	if(p<r)
	{
		q=partition(a,p,r);
		quicksort(a,p,q-1);
		quicksort(a,q+1,r);
	}	
	return;
}
int partition(int a[],int p,int r)
{
	int x,i,j,temp,temp1,q;
	x=a[p];
	i=p;
	for(j=p+1;j<=r;j++)
	{
		if(a[j]<=x)
		{	
			i=i+1;
			if(i!=j)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}	
	}
	temp=a[p];
	a[p]=a[i];
	a[i]=temp;
	q=i;
	return(q);
}
