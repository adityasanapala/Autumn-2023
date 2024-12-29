#include <simplecpp>

#define k 65536

main_program {
    initCanvas("Circle", 500, 500);

    int p1 = getClick();
    int x1 = p1 / k, y1 = p1 % k;
    Circle c1(x1, y1, 2);

    int p2 = getClick();
    int x2 = p2 / k, y2 = p2 % k;
    Circle c2(x2, y2, 2);

    int p3 = getClick();
    int x3 = p3 / k, y3 = p3 % k;
    Circle c3(x3, y3, 2);

    double a = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2)), b = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2)), c = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    double A = arccosine(((b * b) + (c * c) - (a * a)) / (2 * b * c)), B = arccosine(((c * c) + (a * a) - (b * b)) / (2 * c * a)), C = arccosine(((a * a) + (b * b) - (c * c)) / (2 * a * b));

    double xc = ((x1 * sine(2 * A)) + (x2 * sine(2 * B)) + (x3 * sine(2 * C))) / (sine(2 * A) + sine(2 * B) + sine(2 * C)), yc = ((y1 * sine(2 * A)) + (y2 * sine(2 * B)) + (y3 * sine(2 * C))) / (sine(2 * A) + sine(2 * B) + sine(2 * C));

    double R = sqrt(pow(xc - x1, 2) + pow(yc - y1, 2));

    Circle Circumcircle(xc, yc, R);

    getClick();
}
