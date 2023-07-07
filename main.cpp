#include <iostream>
#include <stdint.h>
#include <limits>

#if UINTPTR_MAX == 0xffFFffFF // 32-bit platform
#define ARCH_32
#elif UINTPTR_MAX == 0xffFFffFFffFFffFF // 64-bit platform
#define ARCH_64
#else
#error Unknown platform - does not look either like 32-bit or 64-bit
#endif

#ifdef ARCH_32
#include "libThirdParty32.h"
#else
#include "libThirdParty32Wrapper64.h"
#endif


int main() {

    ThirdPartyLib lib;

    std::cout << lib.calculate(std::numeric_limits<uint32_t>::max());

}
