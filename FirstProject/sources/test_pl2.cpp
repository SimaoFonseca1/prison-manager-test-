//
// Created by uni on 16/03/22.
//
#include "gtest/gtest.h"
#include "pl2.h"
TEST(isEvenBinary, evenOrodd) {
    bool r = isEvenBinary(2);
    EXPECT_TRUE(r);
    r = isEvenBinary(3);
    EXPECT_FALSE(r);
}
TEST(areEqual, equal) {
    bool x = areEqual(3,3);
    EXPECT_TRUE(x);
    x = areEqual(2,3);
    EXPECT_FALSE(x);
}