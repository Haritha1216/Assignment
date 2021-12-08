#include<stdio.h>
int print_arr(int[],int);
int insertion_sort(int[],int);
int main()
{
	int a[20],size,i;
	printf("enter no.of elements:");
	scanf("%d",&size);
	printf("enter elements:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
print_arr(a,size);
insertion_sort(a,size);	
print_arr(a,size);
}
int print_arr(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d \t",a[i]);
	}
}
int insertion_sort(int a[], int n)
{
	int i,j,key;
	for(i=1;i<=n-1;i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1]=a[j];
			j=j-1;
			
		}
		a[j+1]=key;
	}
}
