#include <iostream>

bool perfect(int x) {
    int i = 1, sum = 0;

    while (i < x) {
        if (x % i == 0) {
            sum += i;
        }
        i++;
    }

    if (sum == x) {
        return true;
    }
    return false;
}

void print_factors(int x) {
    int i = 1;

    while (i < x) {
        if (x % i == 0) {
            std::cout << i << std::endl;
        }
        i++;
    }
}

int main() {
    int n;
    std::cin >> n;

    if (perfect(n) == 1) {
        std::cout << n << " is perfect." << std::endl;
    } else {
        std::cout << n << " is not perfect." << std::endl;
    }

    std::cout << "Factors:" << std::endl;

    print_factors(n);

    return 0;
}
