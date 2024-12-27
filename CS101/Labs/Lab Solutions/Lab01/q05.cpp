// We write 360.0 instead of 360 because in programming languages,
// int/int rounds off the result, which leads to imperfections
// For example, cout << 360 / 7; will print 51 to the console.
// While cout << 360.0 / 7; will print 51.4286 to the console.

#include <simplecpp>

main_program {
    cout << 360 / 7 << endl; // Prints 51 to the console

    cout << 360.0 / 7 << endl; // Prints 51.4286 to the console
}
