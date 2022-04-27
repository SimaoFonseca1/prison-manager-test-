//
// Created by uni on 09/03/22.
//
#include "factorial.h"
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
