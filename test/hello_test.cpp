#include <gtest/gtest.h>
#include <iostream>
#include "sample.h"

TEST(HelloTest, print_hello) {
    std::cout << "hello google test framework" << std::endl;
    EXPECT_EQ(3, sample::add(1, 2));
}