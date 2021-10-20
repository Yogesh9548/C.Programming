#include <stdio.h>
int main()
{
    int num, ans;
    printf("Enter a number");
    scanf("%d", &num);
    ans = (num << 5) - num;
    printf("%d", ans);
    return 0;
}