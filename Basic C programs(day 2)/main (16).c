#include <stdio.h>

void main(){
    int h;
    printf("Enter your height:");
    scanf("%d",&h);
    if(h<150)
      {  printf("Dwarf");}
    else
    if(h>150 && h<165)
        printf("Average height");
    else
    if(h>165 && h<190)
        printf("Tall");
    else
        printf("Abnormal height");
}