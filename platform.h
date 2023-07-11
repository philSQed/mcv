#if UINTPTR_MAX == 0xffFFffFFffFFffFF // 64-bit platform
#define ARCH_64
#warning Building for 64 bit
#elif UINTPTR_MAX == 0xffFFffFF // 32-bit platform
#define ARCH_32
#warning Building for 32 bit
#else
#error Unknown platform - does not look either like 32-bit or 64-bit
#endif