#include<stdio.h>
int main()
{
int a[30],lar=0,sec=0,i,n;
printf("enter the elements you want to insert:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]>lar)
{
sec=lar;
lar=a[i];
}
}
printf("%d is second largest",sec);
}


