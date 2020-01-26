#include <iostream>

using namespace std;

int main()
{
    // Ex 2.15
    int ival = 1.01;
    // int &rval1 = 1.01; error
    int &rval2 = ival;
    // int &rval3; error
    cout << ival << endl; // outputs 1
    cout << rval2 << endl; // outputs 1

    // Ex 2.16
    int i = 0, &r1 = i; double d = 0, &r2 = d;
    r2 = 3.14159;
    r2 = r1;
    i = r2;
    r1 = d;
    cout << i << endl; // outputs 0
    cout << r1 << endl; // outputs 0
    cout << r2 << endl; // outputs 0
    cout << d << endl; // outputs 0

    // Ex. 2.17
    int y, &ry = y;
    y = 5;
    ry = 10;
    cout << y << " " << ry << endl; // outputs 10 10

    return 0;
}
