#include <iostream>

// To make code cleaner, we can define a swap function.

void arrange(double &x, double &y, double &z) {
    if (x > y) {
        double temp = x;
        x = y;
        y = temp;
    }
    if (y > z) {
        double temp = y;
        y = z;
        z = temp;
    }
    if (x > y) {
        double temp = x;
        x = y;
        y = temp;
    }

    std::cout << x << " " << y << " " << z << std::endl;
}

int main() {
    double a, b, c;

    std::cin >> a >> b >> c;

    arrange(a, b, c); // Call arrange to sort and print the numbers
}
