#include <stdio.h>
int main()
{
   int x,y,z;
   printf("Enter the value of x and y");
   scanf("%d%d", &x,&y);
   z = 180 - (x + y);

   printf("%d",z);
   return 0;

}