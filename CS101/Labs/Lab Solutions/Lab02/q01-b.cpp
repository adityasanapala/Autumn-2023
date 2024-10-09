#include <iostream>
using namespace std;

int main() {
    int a, r, n;
    cin >> a >> r >> n;
    int term = a;

    for (int i = 0; i < n; i++) {
        cout << term << " ";
        term = term * r;
    }

    cout << endl;
}
