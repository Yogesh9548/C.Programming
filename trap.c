#include <stdio.h>
int main()
{
    float x,y,h,area;
    printf("Enter the side and height of the trapezium");
    scanf("%f%f%f", &x, &y, &h);
    area = 0.5*(x + y)*h;
    printf("%f", area);
    return 0;


}