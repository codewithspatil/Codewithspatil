#include<stdio.h>
int main ()
{
  int a[10],sum=0,i;
  printf("enter 10 elements in array");
   for(i=0;i<10;i++)
  {
   scanf("%d",&a[i]);
  }
  for(i=0;i<10;i++)
   {
    sum=sum+a[i];
   }
  
  printf("sum of in array elements=%d",sum);
  return 0 ;

}