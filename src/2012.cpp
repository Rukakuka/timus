#include <stdio.h>
#include <array>

int main()
{
  int k;
  scanf("%d", &k);
  printf("%s\n", (4./(12.-k) > 3./4.) ? "YES" : "NO");
  return 0;
}
