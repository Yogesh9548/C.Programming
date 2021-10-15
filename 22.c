#include <stdio.h> 
int main()
{
    float c,f;
    printf("Enter temp in f");
    scanf("%f", &f);

    c = (f - 32)*5/9;
    printf("%f", c);
    return 0;


}