#include <stdio.h>
#include <array>
#include <math.h>
#include <tuple>
#include <iostream>
#include <array>
#include <vector>

struct cell : std::pair<int, int>
{
  cell() = default;
  cell(int c, int n)
  {
    std::tie(this->first, this->second) = std::make_pair(c, n);
  }
  bool is_inside()
  {
    return (this->first >= 97 && this->first <= 104 &&
            this->second >= 1 && this->second <= 8);
  };

  void print()
  {
    std::cout << this->first << " " << this->second << std::endl;
  };

  friend cell operator+(cell lhs, cell rhs)
  {
    return cell(lhs.first + rhs.first, lhs.second + rhs.second);
  }
};

static int counter[64];
static cell cells[64];

int main()
{
  int N;

  std::cin >> N;
  char c;
  int n;
  int i = 0;
  auto N_ = N;
  while (N--)
  {
    std::cin >> c >> n;
    cells[i] = cell(c, n);
    ++i;
  }

  std::array<cell, 8> pool = {
      cell(2, 1),
      cell(2, -1),
      cell(-2, 1),
      cell(-2, -1),
      cell(1, 2),
      cell(1, -2),
      cell(-1, 2),
      cell(-1, -2)};

  for (i = 0; i < N_; i++)
  {
    int cnt = 0;
    for (int j = 0; j < pool.size(); j++)
    {
      auto as = pool[j] + cells[i];
      cnt += (int)(as.is_inside());
    }
    printf("%d\n", cnt);
  }

  return 0;
}