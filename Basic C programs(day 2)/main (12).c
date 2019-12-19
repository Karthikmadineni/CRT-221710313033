#include <stdio.h>

int main()
{   int a;
    printf("enter a value");
    scanf("%2d",&a);
    
    printf("%d",a%10-(a/10));
    return 0;

}
