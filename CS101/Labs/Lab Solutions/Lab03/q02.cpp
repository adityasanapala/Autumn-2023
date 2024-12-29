#include <iostream>

int main() {
    int n;
    double x, a, sum = 0, term = 1;
    std::cin >> n >> x;

    while (n != -1) {
        std::cin >> a;
        sum += a * term;
        term *= x;
        n -= 1;
    }

    std::cout << sum << std::endl;

    return 0;
}
