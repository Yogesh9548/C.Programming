#include <stdio.h>
int main()
{
    float f,c;
    printf("Enter the temp in c");
    scanf("%f", &c);

    f = (c * 9 / 5) + 32;
    printf("%f", f);
    return 0;

}