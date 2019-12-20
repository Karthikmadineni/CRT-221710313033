#include <stdio.h>

int main()
{
   int n,i,a=7;
   scanf("%d",&n);
   for(i=0;i<n/2;i++){
       
     printf("%d",a);
     a=a+3;
     printf(" %d ",a);
     a=a-2;
     
   }   
   return 0;
}
