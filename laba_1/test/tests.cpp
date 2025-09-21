#include <gtest/gtest.h>
#include "../include/maxnum.h"

// Тест для основных случаев
TEST(maxnum, BasicCases) {
    EXPECT_EQ(maxnum(2, 7), 6);
    EXPECT_EQ(maxnum(10, 50), 50);
    EXPECT_EQ(maxnum(3, 10), 9);
    EXPECT_EQ(maxnum(7, 100), 98);
}

// Тест для граничных случаев
TEST(maxnum, EdgeCases) {
    EXPECT_EQ(maxnum(1, 1), 1);
    EXPECT_EQ(maxnum(5, 5), 5);
    EXPECT_EQ(maxnum(100, 1000), 1000);
}

// Тест для некорректных входных данных
TEST(maxnum, InvalidInput) {
    EXPECT_EQ(maxnum(0, 10), 0);
    EXPECT_EQ(maxnum(5, 0), 0);
    EXPECT_EQ(maxnum(-2, 10), 0);
}