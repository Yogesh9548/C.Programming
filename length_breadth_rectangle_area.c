#include <stdio.h>
int main()
{
   int x,y,perimeter;
   printf("Enter the length and breadth of rectangle");
   scanf("%d%d", &x, &y);
   perimeter = 2*(x+y);
   printf("%d", perimeter);
   return 0;

}