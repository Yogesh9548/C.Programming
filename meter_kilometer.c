#include <stdio.h>
int main()
{
    int x;
    float meter,kilometer;
    printf("Enter the length in centimeter");
    scanf("%d", &x);
    meter = x * 0.01;
    kilometer = x*0.0001;
    printf("%f\n", meter);
    printf("%f\n", kilometer);

    return 0;

}