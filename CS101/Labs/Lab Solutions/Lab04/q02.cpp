#include <simplecpp>

main_program {
    initCanvas("Chessboard", 800, 800);

    Rectangle r1(40, 40, 40, 40);
    r1.setColor(COLOR("red"));
    r1.setFill(1);

    Rectangle r2(80, 40, 40, 40);
    r2.setColor(COLOR("blue"));
    r2.setFill(1);

    Rectangle r3(40, 80, 40, 40);
    r3.setColor(COLOR("blue"));
    r3.setFill(1);

    Rectangle r4(80, 80, 40, 40);
    r4.setColor(COLOR("red"));
    r4.setFill(1);

    int i = 0;
    repeat(4) {
        repeat(4) {
            
            r1.move(80, 0);
            r1.imprint();

            
            r2.move(80, 0);
            r2.imprint();

            
            r3.move(80, 0);
            r3.imprint();

            
            r4.move(80, 0);
            r4.imprint();
        }
        r1.imprint();
        r1.moveTo(40, 40 + 80 * (i + 1));
        
        r2.imprint();
        r2.moveTo(80, 40 + 80 * (i + 1));
        
        r3.imprint();
        r3.moveTo(40, 80 + 80 * (i + 1));
        
        r4.imprint();
        r4.moveTo(80, 80 + 80 * (i + 1));
        

        i++;
    }
    

    r1.moveTo(120, 40);
    r2.moveTo(160, 40);
    r3.moveTo(120, 80);
    r4.moveTo(160, 80);

    
    
    getClick();
}
