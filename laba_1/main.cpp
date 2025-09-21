#include <iostream>
#include "include/maxnum.h"

int main(){
    int devider, bound;
    std::cout << "enter devider: ";
    std::cin >> devider;
    std::cout << "enter bound: ";
    std::cin >> bound;

    std::cout << "result: " << maxnum(devider, bound) << std::endl;

    return 0;
}