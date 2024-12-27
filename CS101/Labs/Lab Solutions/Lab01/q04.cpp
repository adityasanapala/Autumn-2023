#include <simplecpp>

// We use cosine rule to find the angles.

main_program {
    double a, b, c;

    cout << "Enter the side lengths of the triangle: " << endl;
    cin >> a >> b >> c;

    double x = ((b * b) + (c * c) - (a * a)) / (2 * b * c);
    double y = ((c * c) + (a * a) - (b * b)) / (2 * c * a);

    double A = 180 * acos(x) / PI, B = 180 * acos(y) / PI, C = 180 - A - B;
    turtleSim();
    forward(a);
    left(180 - C);
    forward(b);
    left(180 - A);
    forward(c);
    left(180 - B);

    getClick();
}
