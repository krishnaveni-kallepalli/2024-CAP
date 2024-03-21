#include<stdio.h>
union node 
{
	int a;
	double b;
};
int main()
{
	union node u;
	printf("%ld\n",sizeof(u));
	printf("%p\n",&u.a);
	printf("%p\n",&u.b);
}

