#include<stdio.h>
int main()
{
	int a[10]={213,34,341,7579,0,56,5,4,5464,1},i,j,min,temp;// naresh it
	for(i=0;i<10-1;i++)
	{
		min=i;
		for(j=i+1;j<10;j++)
		{
			if(a[j] < a[min])     //index play important role
			{
				min=j;
			}
		}
		temp=a[i];                    //index and min value get swap
		a[i]=a[min];
		a[min]=temp;
	}
	printf("after sorting the values are\n");
	for(i=0;i<10;i++)
	{
		printf("%d\n",a[i]);
	}


}
