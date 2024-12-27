#include <simplecpp>

main_program {
    int n, l;
    cout << "Enter the number of sides: " << endl;
    cin >> n;
    cout << "Enter the length of each side: " << endl;
    cin >> l;

    turtleSim();
    repeat(n) {
        forward(l);
        right(360 / n);
    }

    getClick();
}
