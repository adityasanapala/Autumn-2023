#include <iostream>

bool is_leap(int year) {
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) return 1;
    return 0;
}

int main() {
    int year;

    std::cin >> year;

    std::cout << is_leap(year) << std::endl;
}