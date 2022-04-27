//
// Created by uni on 30/03/22.
//

#include "gtest/gtest.h"
#include "pl4.h"
TEST(Calculator, add) {
    Calculator calc;
    calc.setOp(0,0);
    double r = calc.add();
    EXPECT_EQ(r,0);
    calc.setOp(-1,1);
    r = calc.add();
    EXPECT_EQ(r,0);
    calc.setOp(-0,1);
    r = calc.add();
    EXPECT_EQ(r,1);
}
//add more tests