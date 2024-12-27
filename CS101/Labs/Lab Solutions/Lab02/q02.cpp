#include <iostream>
using namespace std;

int main() {
    int d;

    cin >> d;

    int z, y, x, w, v, temp;

    z = d % 12;
    temp = d / 12;
    y = temp % 3;
    temp /= 3;
    x = temp % 220;
    temp /= 220;
    w = temp % 8;
    v = temp / 8;

    cout << d << " inches is actually " << v << " mi, " << w << " furlongs, " << x << " yards, " << y << " feet, " << z << " inches." << endl;
    
    return 0;
}
