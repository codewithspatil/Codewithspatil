#include <stdio.h>
int main()
{
  int arr[5], i, j, temp,n;
 int *p;
 printf("Enter a numbers");
 scanf("%d",&n);

 printf ("Enter elements in array");
 for(i=0 ;i<n ;i++)
 scanf("%d",&arr[i]);

  p=&arr[0];

  for(i=0; i<n-1; i++) 

  { 
   for(j=i+1; j<n; j++)

     if (*(p+i) > *(p+j)){

        temp = *(p+i);

        *(p+i) = *(p+j);

        *(p+j) = temp;
     }   
   }     

   printf ("numbers in ascending order");
    for(i=0;i<n;i++)
   printf("%d",*(p+i));
   printf("/n");

  return (0) ;
}

    