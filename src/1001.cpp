#include <iostream>
#include <vector>
#include <cmath>

int main()
{
    double val = 0;
    std::vector<double> v;
    char ch = 0;

    while (std::cin >> val)
    {
        v.push_back(val);
    }
    for (int i = v.size(); i > 0; i--)
    {
        printf("%.4f\n", std::sqrt(v[i-1]));
    }
}