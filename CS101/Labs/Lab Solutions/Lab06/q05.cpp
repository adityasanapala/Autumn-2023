#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int m = 0;

    while(n != 0) {
        m = 10 * m + n % 10;
        n /= 10;
    }

    std::cout << m << std::endl;

    return 0;
}
