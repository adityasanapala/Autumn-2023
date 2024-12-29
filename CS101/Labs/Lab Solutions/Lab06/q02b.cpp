#include <simplecpp>

main_program {
    int n;
    cin >> n;

    if (n < 3) {
        cout << "A polygon has a minimum of 3 points." << endl;

        return 1;
    }

    double x, y, x1, y1, x2, y2, perimeter = 0;

    cin >> x1 >> y1;

    x2 = x1;
    y2 = y1;

    for (int i = 2; i <= n; i++) {
        cin >> x >> y;
        perimeter += sqrt(pow(x2 - x, 2) + pow(y2 - y, 2));

        x2 = x;
        y2 = y;
    }

    perimeter += sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    cout << perimeter << endl;

    return 0;

}
