#include <iostream>
using namespace std;

int main() {
    float f1, f2, centigrade = 100;
    f1 = centigrade*9/5 + 32;
    f2 = 32 + 9/5 * centigrade;

    cout << f1 << " " << f2 << endl; // 212 132

    char x = 'a', y;
    y = x + 1;
    cout << y << " " << x + 1 << endl; // b 98

    return 0;
}
