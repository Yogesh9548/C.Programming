#include <stdio.h>
int main()
{
    int days;
    float years,months;
    printf("Enter the number of days");
    scanf("%d", &days);

    // calculating year 
    years = days / 365;
    
    // calculating month
    months = (days % 365) / 7;

    // calculating days
    days = days - (years * 365) + (months * 7);
    
    printf("%d", months);
    printf("%f", years);
    printf("%f", days);

    return 0;
}