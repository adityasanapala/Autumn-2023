#include <iostream>

bool prime(int x) {
    int i = 1, fac = 0;

    while (i < x) {
        if (x % i == 0) {
            fac++;
        }

        i++;
    }

    if (fac == 1) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n;
    std::cin >> n;

    int i = 1;

    while (i < n) {
        if (prime(i) == 1) {
            std::cout << i << std::endl;
        }
        i++;
    }

    return 0;
}
