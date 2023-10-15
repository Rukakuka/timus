#include <stdio.h>
int main()
{
    int first, second;
    scanf("%d%d", &first, &second);
    printf("%s\n", !(first % 2) || (second % 2 == 1) ? "yes" : "no");
    return 0;
}