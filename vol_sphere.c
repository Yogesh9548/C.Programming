#include <stdio.h>
int main()
{
    float r,volume;
    printf("Enter the radius of sphere");
    scanf("%f", &r);
    volume = 1.33*3.14*r*r*r;
    printf("%f", volume);
    return 0;


}