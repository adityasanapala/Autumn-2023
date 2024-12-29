#include <iostream>

int fac(int x) {
    if (x == 0) {
        return 1;
    }
    return x * fac(x - 1);
}

int main() {
    int n;
    std::cin >> n;

    std::cout << fac(n) << std::endl;

    return 0;
}
