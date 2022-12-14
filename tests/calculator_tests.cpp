#pragma once
#include <gtest/gtest.h>
#include <lib/calculator.h>

TEST(Calculator, Summa) {
    const auto expected = 30;
    const auto actual = sum(25, 5);
    ASSERT_EQ(actual, expected);
}

TEST(Calculator, Subtraction) {
    const auto expected = 20;
    const auto actual = sub(25, 5);
    ASSERT_EQ(actual, expected);
}

TEST(Calculator, Multiplication) {
    const auto expected = 125;
    const auto actual = multi(25, 5);
    ASSERT_EQ(actual, expected);
}

TEST(Calculator, Division) {
    const auto expected = 5;
    const auto actual = divi(25, 5);
    ASSERT_EQ(actual, expected);
}
