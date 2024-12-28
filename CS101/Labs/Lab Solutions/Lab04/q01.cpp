#include <simplecpp>

main_program {
    initCanvas("y = sinx", 1440, 800);

    Line l1(80, 100, 80, 700); // Y - axis
    Line l2(0, 400, 1600, 400); // X - axis

    // Axis Markings

    Text t1(80, 400, "0");
    Text t2(70, 300, "1");
    Text t3(70, 500, "-1");
    Text t4(70, 200, "2");
    Text t5(70, 600, "-2");
    Text t6(240, 400, "PI/2");
    Text t7(400, 400, "PI");
    Text t8(560, 400, "3PI/2");
    Text t9(720, 400, "2PI");
    Text t10(880, 400, "5PI/2");
    Text t11(1040, 400, "3PI");
    Text t12(1200, 400, "7PI/2");
    Text t13(1360, 400, "4PI");


    Circle c(80, 400, 0.5);

    for (int i = 0; i < 1280; i++) {
        c.moveTo(i + 80, 400 - 100 * sin(PI * i / 320));
        c.imprint();
    }
    
    getClick();
}

/*
A lot of parameters have been altered to get the scaling as close to the
original as possible.

x/y = PI/2 (for actual graph)

Here, I am using a scaling of x/y = 1.6

Since PI/2 ~ 1.57 ~ 1.6

The gap between 0 and PI/2 on the X axis is 160 pixels and the gap between
0 and 1 on the Y axis is 100 pixels.
*/
