#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int m = 0, k = n;;

    while(k != 0) {
        m = 10 * m + k % 10;
        k /= 10;
    }

    if (n == m) {
        std::cout << n << " is a palindrome." << std::endl;
    } else {
        std::cout << n << " is not a palindrome." << std::endl;
    }

    return 0;
}
