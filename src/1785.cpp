#include <stdio.h>
#include <array>
#include <iostream>

int main() {
    const char* name[] = { "few", "several", "pack", "lots", "horde", "throng", "swarm", "zounds", "legion" };
    int input;
    std::cin >> input;
    if (input >=1 && input <= 4) std::cout << name[0];
    if (input > 4 && input <= 9) std::cout << name[1];
    if (input > 9 && input <= 19) std::cout << name[2];
    if (input > 19 && input <= 49) std::cout << name[3];
    if (input > 49 && input <= 99) std::cout << name[4];
    if (input > 99 && input <= 249) std::cout << name[5];
    if (input > 249 && input <= 499) std::cout << name[6];
    if (input > 499 && input <= 999) std::cout << name[7];
    if (input >= 1000) std::cout << name[8];
    return 0;
}
