#include <simplecpp>

// This program prints the correct value of e.

main_program {
    int n, fac = 1, i = 2;
    double e = 1.0;
    cin >> n;

    repeat(n) {
        e = e + 1.0/fac;
        fac = fac * i;
        i = i + 1;
    }

    cout << e << endl;
}

---

#include <simplecpp>

// This program prints the wrong value of e.

main_program {
    int n, fac = 1, i = 1;
    double e = 1.0;
    cin >> n;

    repeat(n) {
        e = e + 1.0/fac;
        fac = fac * i;
        i = i + 1;
    }

    cout << e << endl;
}
