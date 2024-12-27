#include <simplecpp>

main_program {
    turtleSim();
    // Let number of turns be x and angle turned in each turn be y.
    // We have to adjust the angle such that x * y = 360 to obtain a circle.
    // The smaller y is (i.e., the larger x is), the smoother the circle is.
    repeat(30) {
        forward(5);
        right(12);
    }
    repeat(30) {
        forward(5);
        left(12);
    }

    getClick();
}
