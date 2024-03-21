#include<stdio.h>
int main()
{
	int i,j,a[20] = {1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,22,33,55,66};
	int count;
	
	for(i=0;i<20;i++)
	{
		count  = 0;
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j])
			{
				count =1;
			}
		}
		if(count == 0) printf("%d\t",a[i]);	
	}
	printf("\n");
return 0;
}




