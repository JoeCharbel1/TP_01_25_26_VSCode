// ...existing code...
#include <iostream>
#include <cmath>
#include <gtest/gtest.h>
// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
// Expect two strings not to be equal.
EXPECT_STRNE("hello", "world");
// Expect equality.
EXPECT_EQ(7 * 6, 42);
}

double distance(double x1, double y1, double x2, double y2) {
    double dx = x2 - x1;
    double dy = y2 - y1;
    return std::sqrt(dx*dx + dy*dy);
}

// Demonstrate some basic assertions.
TEST(Ex3, TestDistance) {
// Expect equality.
EXPECT_EQ(distance(5,1,1,1), 4);
}
// Demonstrate some basic assertions.
TEST(Ex3, TestDistanceCorner) {
// Expect equality.
EXPECT_EQ(distance(1,1,1,1), 0);
}