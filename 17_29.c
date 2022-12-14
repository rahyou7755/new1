#include<stdio.h>
int main()
{
	int a,b,i=0,j=0;
	printf("enter the numbers:");
	scanf("%d%d",&a,&b);
	while(j<31)
	{
		if(a & (0x1<<i) ^ (b&(0x1<<i)))
		{
			if(b&(0x1<<i))
			{
				a=a | (0x1<<i);
			}
			else
			{
				a=a & ~(0x1<<i);
			}
		}
               i++;
               j++;
	}
	printf("%d %d",a,b);
}

