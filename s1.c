 #include<stdio.h>
   #include<stdio.h>
   #define N 10
   
   int main()
   {
   int a[N]={2,3,4,5,7,8,9,0,11,12};
   int temp,i;
   int pos=5;
  
  temp=a[pos];
  for(i=N-1;i>=pos;i--)
  {
  a[i]=a[i-1];
  }
  a[pos]=temp;
  //a[pos]=temp;
  for(i=0;i<N;i++)
  printf("%d ",a[i]);
  }


