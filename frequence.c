#include<stdio.h>
int main()
{
	char a[30];
	int count=0,i;
	printf("enter the string");
	scanf("%[^\n]s",a);
	char c;
	for(c='a';c<='z';c++)
	{
              count=0;
		for(i=0;a[i]!='\0';i++)
		{
			if(c==a[i])
			 count++;
                        if(count>0)
			printf("%c is found %d times\n",c,count);
                        
		}
	}
}

