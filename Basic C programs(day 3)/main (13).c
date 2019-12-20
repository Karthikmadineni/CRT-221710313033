#include <stdio.h>

int main()
{
   int a=53,n,i;
   scanf("%d",&n);
   for(i=0;i<n;i++){
       printf("%d",a);
       printf(" %d ",a);
       a=a-13;
   }
     
     
   return 0;
}
