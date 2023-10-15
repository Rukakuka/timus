#include <stdio.h>
#include <array>
#include <math.h>

int main()
{
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  int ret = 0;
  if (b == 0 || c == 0 ||
      b + c > b * c)
  {
    ret = (a - b - c);
  }
  else
  {
    ret = (a - b * c);
  }
  printf("%d\n", ret);
  return 0;
}