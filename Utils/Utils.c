//
// Created by Андрей Понамарчук on 2019-08-14.
//

#include "Utils.h"

long numbLength(long numb) {
    long result = 0;
    do {
        result++;
        numb /= 10;
    } while (numb);
    //printf("numbLength = %lld\n",result);
    return result;
}

long getLastDigits(long length, long numb) {
    long divisor = pow(10,length);
    return numb % divisor;
}
