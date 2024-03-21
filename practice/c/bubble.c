#include<stdio.h>
int main()
{
	int a[10],i,j ,n;
	printf("Enter n:");
	scanf("%d",&n);
	
	printf("enter elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j] > a[j+1])
			{
				int temp;
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
