#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
int n=1,c=0;
void *fun()
{
	while(n<=20)
	{
		if(n%2==0)
		{
			printf("%d\t",n);
			n++;
			c++;
			sleep(4);
		}
		else
		{
			sleep(4);
		}
	}
}
void *fun1()
{
	while(n<=20)
	{
		if(n%2!=0)
		{
			printf("%d odd ",n);
			n++;
			c++;
			sleep(4);
		}
		else
		{
			sleep(4);
		}
	}
}
int main()
{
	pthread_t a[2];
	pthread_create(&a[0],NULL,fun,NULL);
	pthread_create(&a[1],NULL,fun1,NULL);
	pthread_join(a[0],NULL);
	pthread_join(a[1],NULL);
}
