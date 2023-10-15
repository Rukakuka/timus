#include <stdio.h>
int main()
{
   int a, b;
   scanf("%d%d", &a, &b);
   printf("%ld\n", static_cast<long>(a * (b +1)));
   return 0;
}