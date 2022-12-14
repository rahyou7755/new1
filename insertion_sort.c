
#include<stdio.h>
int main()
{
	int a[8],temp,i,j;
	for(i=0;i<8;i++)
        {
                scanf("%d\n",&a[i]);
        }

	for(i=1;i<8;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0 && a[j]>temp)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
	}
	for(i=0;i<8;i++)
	{
		printf("%d\n",a[i]);
	}
}
