#include <stdio.h>
int main()
{
        int side;
        float area;
        printf("Enter the side side of equilateral triangle");
        scanf("%d", &side);

        area = (1.73/4) * side * side;

        printf("%f", area);
        return 0; 

}