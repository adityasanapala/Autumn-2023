#include <simplecpp>

main_program {
    turtleSim();
    float r = 0.5;
    repeat(20) {
        repeat(50) {
            forward(r);
            left(2);
        }
        r += 0.5;
    }
    
    getClick();
}
