#include<stdio.h>
struct node 
{
	double num;
	char s[10];
};
int main()
{
	struct node s;
	printf("%ld\n",sizeof(s));
}
