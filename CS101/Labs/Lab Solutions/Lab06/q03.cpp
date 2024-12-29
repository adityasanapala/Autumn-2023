#include <iostream>

int sqrt_approx(int x) {
    int i = 0;
    for (int i = 0; i < x; i++) {
        if (i * i >= x) {
            return i - 1;
        }
    }
}

int main() {
    int n;
    std::cin >> n;

    std::cout << sqrt_approx(n) << std::endl;

    return 0;
}
