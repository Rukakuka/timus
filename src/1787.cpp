#include <stdio.h>
int main()
{
    int rate, n;
    scanf("%d%d", &rate, &n);
    int diff = 0;
    int cars;
    while (scanf("%d", &cars) != EOF)
    {
        diff += cars - rate;
        diff = diff > 0 ? diff : 0;
    }
    printf("%d\n", diff);
    return 0;
}