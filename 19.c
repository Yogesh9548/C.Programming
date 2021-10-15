#include <stdio.h>
int main()
{
    int r,diam;
    float circum,area;
    printf("Enter the radius of circle");
    scanf("%d", &r);
    
    diam = 2*r;
    circum = 2*3.14*r;
    area = 3.14*r*r;

    printf("%d\n", diam);
    printf("%f\n", circum);
    printf("%f\n", area);
    
    return 0;
}