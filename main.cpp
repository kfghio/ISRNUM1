#include <gtest/gtest.h>
#include "calculator.h"

TEST(BasicTests, SUM) {
    EXPECT_FLOAT_EQ(1, calculator(1,0,'+'));
    EXPECT_FLOAT_EQ(2, calculator(1,1,'+'));
    EXPECT_FLOAT_EQ(0, calculator(-1,1,'+'));
    EXPECT_FLOAT_EQ(10.5, calculator(10,0.5,'+'));
}

TEST(BasicTests, RES) {
    EXPECT_FLOAT_EQ(0, calculator(1,0,'*'));
    EXPECT_FLOAT_EQ(20, calculator(5,4,'*'));
    EXPECT_FLOAT_EQ(-3, calculator(-1,3,'*'));
    EXPECT_FLOAT_EQ(5, calculator(10,0.5,'*'));
}

TEST(BasicTests, DEL) {
    EXPECT_FLOAT_EQ(0, calculator(1,0,'/'));
    EXPECT_FLOAT_EQ(1, calculator(1,1,'/'));
    EXPECT_FLOAT_EQ(-1, calculator(-1,1,'/'));
    EXPECT_FLOAT_EQ(20, calculator(10,0.5,'/'));
}

TEST(BasicTests, DIF) {
    EXPECT_FLOAT_EQ(1, calculator(1,0,'-'));
    EXPECT_FLOAT_EQ(2, calculator(1,-1,'-'));
    EXPECT_FLOAT_EQ(-2, calculator(-1,1,'-'));
    EXPECT_FLOAT_EQ(9.5, calculator(10,0.5,'-'));
}

TEST(BasicTests, NUM2_0) {
    EXPECT_FALSE(errortp(0));
}
