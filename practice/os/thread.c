#include<stdio.h>
#include<stdlib.h>	
#include<pthread.h>
#include<unistd.h>
int range=10;
void *inc(void *arg)
{
	
	int *ptr,i;
	ptr = arg;
	
	for(i=0;i<range;i++)
	{sleep(1);
		printf("inc:%d\n",i);
		}
} 
void *dec(void *arg)
{
	int *ptr,i;
	ptr = arg;
	
	for(i=range;i>=0;i--)
	{sleep(2);
		printf("dec:%d\n",i);
		}
} 

int main()
{
	//scanf("%d",&range);
	pthread_t t1,t2;
	pthread_create(&t1,NULL,inc,NULL);//&range);
	pthread_create(&t2,NULL,dec,NULL);//&range);
	
	pthread_join(t1,NULL);
	pthread_join(t2,NULL);
}
	
