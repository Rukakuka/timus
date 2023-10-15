#include <stdio.h>
#include <iostream>
#include <map>
#include <sstream>

static std::map<int, int> m;

int main()
{
    int k = 0;
    while (std::cin.peek() != EOF)
    {
        int N;
        std::cin >> N;
        std::string tokens;
        std::getline(std::cin, tokens);
        std::getline(std::cin, tokens);
        std::stringstream ss;
        ss.str(tokens);
        std::string item;
        while (std::getline(ss, item, ' '))
        {
            auto v = std::atol(item.c_str());
            auto it = m.find(v);
            if (it != m.end())
            {
                auto& val = it->second;
                ++val;
            }
            else
            {
                m.insert({v, 1});
            }
        }
        k++;
    }

    int c = 0;
    for(auto val : m )
    {
        if (val.second >= k) {
            ++c;
        }
    }
    printf("%d\n", c);

    return 0;
}
