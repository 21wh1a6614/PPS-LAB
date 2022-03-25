// find the max min and avg of the number in the array
#include<stdio.h>
int avg(int a[100],int n);
int max(int a[100],int n);
int min(int a[100],int n);
int main()
{
	int  a[100],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	avg(a,n);
	max(a,n);
	min(a,n);
}

int avg(int a[100], int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
	    sum=sum+a[i];
        }
	printf("average of the numbbers in an array is %d\n",sum/n);
}

int min(int a[100],int n)
{
	int i,min;
	for(i=1;i<n;i++)
	{
		min=a[0];
		if(a[i]<=min)
		{
			min=a[i];
		}
	}
		printf("minimum values in the array is %d\n",min);
}
 int max(int a[100],int n)
{
	int i,max;
 for(i=1;i<n;i++)
{
	max=a[0];
	if(max<=a[i])
	{
		max=a[i];
	}
}

	printf("maximum value in the array is %d\n",max);

}
