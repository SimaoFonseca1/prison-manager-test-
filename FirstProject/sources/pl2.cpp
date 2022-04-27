//
// Created by uni on 16/03/22.
//

#include "pl2.h"
bool isEvenBinary(unsigned int n) {
    unsigned int mask = 0b0001;
    if ((n & mask) == 1) {
        return false;
    }
    return true;
}

bool areEqual(unsigned int a, unsigned int b){
    if (a ^ b == 0)
    {
        return true;
    }else
    return false;
}
void swap(unsigned  int &a, unsigned int &b){
    int aux = a;
    a=b;
    b=aux;
}