#include <stdio.h>
int main()
{
    int x,y;
    int sum,sub,mul,mod;
    float div;
    printf("Enter any two number");
    scanf("%d%d", &x, &y);

    sum = x + y; 
    sub = x - y;
    mul = x * y;
    mod = x % y;
    div = x / y;

    printf("%d\n", sum);
    printf("%d\n", sub);
    printf("%d\n", mul);
    printf("%d\n", mod);
    printf("%f\n", div);
    return 0;
} 