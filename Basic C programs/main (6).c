#include<stdio.h>
void main ()
{
  char name[20],sname[20];
  scanf("%s",&name);
  scanf("%s",&sname);
  
  printf("%s",name);
  printf("%s\n",sname);
  
  printf("%s\t",name);
  printf("%s\n",sname);
  
  printf("%s\b",name);
  printf("%s\n",sname);
  
  printf("%s\r",name);
  printf("%s",sname);
}