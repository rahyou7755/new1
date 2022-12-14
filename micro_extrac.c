#include<stdio.h>
#define fun(a,b,p) (((1<<b)-1) & (a>>(p-1)))
//#define fun(a,b,p)  n =((1<<b)-1)              //
  //                 m= (a>>(p-1))              //
    //               n & m     //
                               
int main()
{
int a=0xab,b=3,p=2,n=0,m=0;
a=fun(a,b,p);
printf("%d",a);
}

