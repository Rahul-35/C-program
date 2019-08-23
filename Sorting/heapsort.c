#include<stdio.h>
#include<stdlib.h>
void max_heapify(int [],int,int);
void build_max_heap(int [],int);
void heapsort(int [],int);
main()
{
	int h[50],a[50];
	int i,n;
	system("clear");
	printf("\nEnter no. of elements: ");
	scanf("%d",&n);
	printf("\nEnter %d data\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&h[i]);
	
	printf("\nBefore sorting\n");
	for(i=0;i<n;i++)
		printf("%d ",h[i]);

	heapsort(h,n-1);
	printf("\nAfter sorting\n");
	for(i=0;i<n;i++)
		printf("%d ",h[i]);
}
void max_heapify(int h[],int i,int n)
{
	int child,item,par;
		child=2*i;
		item=h[i];
	while(child<=n)		
	{
		if(child<n && h[child]<h[child+1])
			child=child+1;
		if(item>=h[child])
			break;
		par=child/2;
		h[par]=h[child];
		child=2*child;	
	}	
		
	par=child/2;
	h[par]=item;
	return;
}	
	
void build_max_heap(int a[],int n)
{
	int i;
	for(i=(n/2);i>=0;i--)
		max_heapify(a,i,n);
	return;	
}	
	
void heapsort(int a[],int n)
{
	int i,temp;
	build_max_heap(a,n);
	for(i=n-1;i>=1;i--)
	{
		temp=a[0];
		a[0]=a[i];
		a[i]=temp;
		max_heapify(a,0,i-0);
	}
	return;
}	
