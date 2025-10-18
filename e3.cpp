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

double sqrt_newton(double n) {
    if (n < 0.0) return NAN;
    if (n == 0.0) return 0.0;
    double x = n;                 // initial guess
    const double eps = 1e-12;
    while (true) {
        double next = 0.5 * (x + n / x);
        if (std::fabs(next - x) < eps) break;
        x = next;
    }
    return x;
}

double distance(double x1, double y1, double x2, double y2) {
    double dx = x2 - x1;
    double dy = y2 - y1;
    return sqrt_newton(dx*dx + dy*dy);
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