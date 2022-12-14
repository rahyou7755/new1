#include<stdio.h>
#include<string.h>
int main()
{
	char a[30],b[20];
	int i=0,j=0,c=0;
	printf("enter the string");
	scanf("%[^\n]s",a);
	printf("enter the second string");
	scanf(" %[^\n]s",b);
	while(a[i]!='\0')
	{
		if(a[i]!=b[j])
		{
			i++;
		}
		else if(a[i]==b[j])
		{
			while(b[j]!='\0')
			{
				if(a[i]==b[j])
				{
					i++;
					j++;
					c++;
				}
				else
				{
					c=0;
					break;
				}
			}
		}
	}
	if(c>0)
	{
		printf("sub string present");
	}
	else
	{
		printf("sub string not present");
	}
}
