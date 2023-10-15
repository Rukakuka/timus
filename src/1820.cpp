#include <stdio.h>
#include <array>
#include <math.h>

int main()
{
  int n, k;
  scanf("%d %d", &n, &k);
  printf("%d\n", n < k ? 2 : (int)(std::ceil((double(n*2) / (double)k))));
  return 0;
}