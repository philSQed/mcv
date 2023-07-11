//
// Created by Phil Nash on 06/07/2023.
//

#ifndef MCV_LIBTHIRDPARTY32_H
#define MCV_LIBTHIRDPARTY32_H

#include <cstdint>

// Imagine this is linked from a third party lib
class ThirdPartyLib {
public:
    int calculate( int data ) {
//        return (data+1)/2;
        return (uint16_t)data*2;
    }
};


#endif //MCV_LIBTHIRDPARTY32_H
