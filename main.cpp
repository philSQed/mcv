#include <iostream>
#include <stdint.h>
#include <limits>
#include "libThirdParty.h"

int main() {

    ThirdPartyLib lib;

//    std::cout << lib.calculate(INT_MAX);
    std::cout << lib.calculate(std::numeric_limits<uint32_t>::max());

}
