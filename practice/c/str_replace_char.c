#include<stdio.h>
int main()
{
	char s[10],c;
	int pos,i;
	printf("Enter String:");
	scanf("%s",s);
	printf("ENter pos:");
	scanf("%d",&pos);
	printf("ENter char:");
	scanf(" %c",&c);
	for(i=0;s[i];i++)
	{
		if(i==pos-1)
		{
			s[i] = c;
		}
	}
	printf("String: %s\n",s);
}
