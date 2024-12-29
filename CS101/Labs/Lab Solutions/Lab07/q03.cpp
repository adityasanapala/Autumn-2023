#include <iostream>

int pal(int x) {
    int n = x, sum = 0;

    while (n != 0) {
        sum = sum * 10 + n % 10;
        n /= 10;
    }

    return sum;
}

int main() {
    int x;
    std::cin >> x;

    while (x != pal(x)) {
        x++;
    }

    std::cout << x << std::endl;

    return 0;
}
