#include<stdio.h>
#include<stdlib.h>
int binarysearch_re(int [],int,int,int);
void sort(int [],int);
main()
{
	int a[50];
	int item,lb,ub,n,i;
	system("clear");

	printf("\nEnter no. of elements: ");
	scanf("%d",&n);
	printf("\nEnter %d data\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	lb=0;
	ub=n-1;
	printf("Enter the element to be searched:\n");
	scanf("%d",&item);
	sort(a,n);
	if(binarysearch_re(a,lb,ub,item)==0)
		printf("\n%d is not found",item);
	else
		printf("\n%d is found",item);
}

int binarysearch_re(int a[],int beg,int end,int item)
{
	int mid;
	if(beg > end)
		return(0);
	mid=(beg + end)/2;
	if(item==a[mid])
		return(mid);
	if(item > a[mid])
		return(binarysearch_re(a,mid+1,end,item));
	else
		return(binarysearch_re(a,beg,mid-1,item));
}
void sort(int a[],int n)
{
	int i,j,temp,swap;
	swap = 1;
	for(i=0;i<n && swap==1;i++)
	{
		swap = 0;
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				swap = 1;
			}
		}
}	}
