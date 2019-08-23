#include<stdio.h>
#include<stdlib.h>
void mergesort(int [],int,int);
void merge(int[],int,int,int);
main()
{
	int a[50];
	int i,n,p,r,ls,rs,re;
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
	mergesort(a,p,r);
	
	printf("\nAfter sorting\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}

void mergesort(int a[],int p,int r)
{
	int q;
	if(p<r)
	{
		q=(p+r)/2;
		mergesort(a,p,q);
		mergesort(a,q+1,r);
		merge(a,p,q+1,r);
	}	
	return;
}
void merge(int a[],int ls,int rs,int re)
{
	int k=-1,le,i,j;
	int temp[50];
	le=rs-1;
	i=ls;
	j=rs;
	while(i<=le && j<=re)
	{
		if(a[i]<a[j])
		{
			k++;
			temp[k]=a[i];
			i++;
		}
		else
		{
			k++;
			temp[k]=a[j];
			j++;
		}
		
	}
	while(i<=le)
	{
		k++;
		temp[k]=a[i];
		i++;
	}
	while(j<=re)
	{
		k++;
		temp[k]=a[j];
		j++;
	}
	for(i=0;i<=k;i++)
		//a[ls-1+i]=temp[i];
		a[ls-0+i]=temp[i];
}
