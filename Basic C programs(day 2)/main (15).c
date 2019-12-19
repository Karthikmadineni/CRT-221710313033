#include <stdio.h>

void main(){
    int a,b,c;
    printf("enter 3 values\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b && c<b)
        printf("largest=%d",b);
    else if(a>b && a>c)
        printf("largest=%d",a);
    else
        printf("largest=%d",c);
    
}