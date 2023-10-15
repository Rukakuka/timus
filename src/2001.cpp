#include <stdio.h>
int main()
{
    int a1, b1;
    scanf("%d%d", &a1, &b1);
    int x, y;
    scanf("%d%d", &x, &y);
    scanf("%d", &x);
    printf("%d %d\n", a1 - x, b1 - y);
    return 0;
}