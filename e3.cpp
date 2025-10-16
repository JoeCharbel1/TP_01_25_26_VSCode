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

int main_e3() {
    double x1, y1, x2, y2;
    std::cout << "Enter coordinates of first point (x y): ";
    if (!(std::cin >> x1 >> y1)) return 0;
    std::cout << "Enter coordinates of second point (x y): ";
    if (!(std::cin >> x2 >> y2)) return 0;

    double d = distance(x1, y1, x2, y2);
    std::cout << "Euclidean distance: " << d << '\n';
    return 0;
}
// ...existing code...