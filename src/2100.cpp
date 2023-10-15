#include <stdio.h>
#include <array>
#include <math.h>
#include <tuple>
#include <iostream>
#include <array>
#include <vector>

int main()
{
  int N;
  int result = 200;
  std::cin >> N;
  std::string line;
  while (N--)
  {
    std::cin >> line;
    if (line.find_first_of('+') == std::string::npos) {
      result += 100;
    } else {
      result += 200;
    }
  }
  if (result == 1300) {
    result += 100;
  }

  std::cout << result << std::endl;

  return 0;
}