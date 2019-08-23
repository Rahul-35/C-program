#include<stdio.h>
#include<stdlib.h>
int intersearch(int [],int,int,int);
void sort(int [],int);
main()
{
	int a[50];
	int key,lb,ub,n,i;
	system("clear");

	printf("\nEnter no. of elements: ");
	scanf("%d",&n);
	printf("\nEnter %d data\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	lb=0;
	ub=n-1;
	printf("Enter the element to be searched:\n");
	scanf("%d",&key);
	sort(a,n);
	if(intersearch(a,lb,ub,key)==0)
		printf("\n%d is not found",key);
	else
		printf("\n%d is found",key);
}
int intersearch(int a[],int lb,int ub,int key)
{
	int beg,end,pos,j=0;
	beg=lb;
	end=ub;
	if(key<a[beg] || key>a[end])
		return(j);
		
		while(beg<=end && j==0)
		{	
			pos=beg+(((key-a[beg])*(end-beg))/(a[end]-a[beg]));
			if(key==a[pos])
			j=pos;
			else if(key<a[pos])
				end=pos-1;
			else
				beg=pos+1;
		}
	return(j);
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
	}
}	
