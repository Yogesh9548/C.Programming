#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
    float a,b,c,s,area;
    printf("Enter the length of three side of triangle");
    scanf("%f %f %f", &a, &b, &c );
    
    s = a + b + c/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%f", area);
    return 0;
           
}