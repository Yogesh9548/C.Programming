# include <stdio.h>
int main()
{
    int a,b,quatient,remainder;
    printf("Finding quatient and remainder");
    scanf("%d %d", &a,&b);
    quatient = a / b;
    remainder = a % b;
    printf("%d %d\n", quatient,remainder);
    return 0;


}