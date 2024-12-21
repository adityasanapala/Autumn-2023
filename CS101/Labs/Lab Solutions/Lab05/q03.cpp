#include <iostream>

double sqrt(double x) {
    float guess = x / 2.0f;
    float epsilon = 0.0001f;
    
    while (true) {
        float newGuess = (guess + x / guess) / 2.0f;
        if (abs(newGuess - guess) < epsilon) {
            break;
        }
        guess = newGuess;
    }
    return guess;
}

void find_roots(double x, double y, double z) {
    if (x == 0 && y != 0) {
        std::cout << -z / y << std::endl;
    }
    if (x == 0 && y == 0) {
        std::cout << "Invalid expression!" << std::endl;
    }
    if (x != 0) {
        double d = (y * y) - (4 * x * z);
        
        if (d > 0) {
            std::cout << (sqrt(d) - y) / (2 * x) << ", " << (-sqrt(d) - y) / (2 * x) << std::endl;
        }
        if (d == 0) {
            std::cout << y / (2 * x) << ", " << y / (2 * x) << std::endl;
        }
        if (d < 0) {
            double re = -y / (2 * x), im = sqrt(-d) / (2 * x);
            std::cout << "(" << re << " + " << im << "i), (" << re << " - " << im << "i)" << std::endl;
        }
    }
}

int main() {
    double a, b, c;

    std::cin >> a >> b >> c;

    find_roots(a, b, c);
}
