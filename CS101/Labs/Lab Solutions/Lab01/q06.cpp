#include <simplecpp>

main_program {
    turtleSim();

    repeat(7) {
        forward(100);
        right(1800.0 / 7);
    }
    
    getClick();
}
