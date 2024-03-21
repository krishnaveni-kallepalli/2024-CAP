#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[50];
    int i,j,flag=0;
    scanf("%s",str);
    printf("string is:\n");
    printf("%s\n",str);
    for(i=0,j=strlen(str)-1;j>i;i++,j--)
    {
    	if(str[i]!=str[j])
    	{
    		flag = 1;
    		break;
    	}
    }
    if(flag ==0)
    printf("palindrome");
    else
    printf("not palindrome\n");
}
