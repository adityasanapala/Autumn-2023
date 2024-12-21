#include <iostream>

int main() {
    double x = 1, e = 0;

    double t = 1;
    for (int i = 0; i < 15; i++) {
        //std::cout << t << std::endl;
        e += t;
        t = t * x / (i + 1);
    }

    std::cout << e << std::endl;
}
