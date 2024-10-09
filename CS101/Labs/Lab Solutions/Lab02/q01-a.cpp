#include <iostream>
using namespace std;

int main() {
    int a, d, n;
    cin >> a >> d >> n;
    int term = a;

    for (int i = 0; i < n; i++) {
        cout << term << " ";
        term = term + d;
    }

    cout << endl;
}
