#include <stdio.h>
int main()
{
    int b,h;
    float a;
    printf("Enter the b and h of a triangle");
    scanf("%d%d", &b,&h);
    
    a = 0.5 * b * h;
    printf("%f", a);
    return 0;

}