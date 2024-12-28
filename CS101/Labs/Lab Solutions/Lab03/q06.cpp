#include <iostream>

// Program to compute the sine of a real number using the first 15 terms of the Taylor Expansion.
// Here, sum = sin(x)

int main() {
    double x;
    std::cin >> x;

    double t = x, sum = x;

    for (int i = 1; i < 15; i++) {
        // std::cout << t << std::endl;
        t *= (-1 * x * x) / ((2 * i) * ((2 * i) + 1));
        sum += t;
    }

    std::cout << sum << std::endl;

    return 0;
}
