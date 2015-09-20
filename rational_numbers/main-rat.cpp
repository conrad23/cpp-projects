#include <iostream>
#include "RationalNumber.h"

using namespace std;

int main() {
    RationalNumber r1 = RationalNumber(6, 8);
    RationalNumber r2 = RationalNumber(1, 3);
    RationalNumber r3, r4, r5, r6, r7;

    cout << "First rational number: " << r1.toString() << endl;
    cout << "Second rational number: " << r2.toString() << endl;

    if (r1.isLike(r2))
        cout << "r1 and r2 are equal." << endl;
    else
        cout << "r1 and r2 are NOT equal." << endl;

    r3 = r1.reciprocal();
    cout << "The reciprocal of r1 is: " << r3.toString() << endl;

    r4 = r1.add(r2);
    r5 = r1.subtract(r2);
    r6 = r1.multiply (r2);
    r7 = r1.divide(r2);

    cout << "r1 + r2: " << r4.toString() << endl;
    cout << "r1 - r2: " << r5.toString() << endl;
    cout << "r1 * r2: " << r6.toString() << endl;
    cout << "r1 / r2: " << r7.toString() << endl;
}
