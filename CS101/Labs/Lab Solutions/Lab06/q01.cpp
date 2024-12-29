#include <iostream>

int main() {
    // for loop

    std::cout << "Using for loop" << std::endl;

    for (int i = 0; i <= 100; i++) {
        int c = i;
        double f = 32 + (9 * c / 5);

        std::cout << c << "°C = " << f << "°F" << std::endl;
    }

    std::cout << std::endl;

    // while loop

    std::cout << "Using while loop" << std::endl;

    int i = 0;

    while (i <= 100) {
        int c = i;
        double f = 32 + (9 * c / 5);

        std::cout << c << "°C = " << f << "°F" << std::endl;
        i++;
    }

    return 0;
}
