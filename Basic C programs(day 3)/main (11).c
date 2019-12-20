#include <stdio.h>

int main()
{
   int a,i=1,n=0;
   printf("enter limit:");
   scanf("%d",&a);
   while(i<=a){
       n=(n*10)+3;
       
       printf("%d",n);
       
       if(i<a){
       printf("+");}
       
       i=i+1;
   }
   return 0;
}
