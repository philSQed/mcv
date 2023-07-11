//
// Created by Phil Nash on 06/07/2023.
//

#ifndef MCV_LIBTHIRDPARTY_H
#define MCV_LIBTHIRDPARTY_H

#include <cstdint>
#include "platform.h"

#ifdef ARCH_32

// Imagine this is linked from a third party lib
class ThirdPartyLib {
public:
    int calculate( int data ) {
//        return (data+1)/2;
        return (uint16_t)data*2;
    }
};

#else

class ThirdPartyLibExt {
public:
    int calculate( int data ) const {
        return data*2;
    }
};

// Imagine this is a wrapper that proxies a 32 bit lib that is used out of proc
class ThirdPartyLib {
    ThirdPartyLibExt ext;
    static constexpr double max = 100.0;
public:
    uint32_t calculate( uint32_t data ) const {
#ifndef NDEBUG
        if( data > max ) {
            data = max;
        }
#endif
        return ext.calculate(data);
    }
};

#endif

#endif //MCV_LIBTHIRDPARTY_H
