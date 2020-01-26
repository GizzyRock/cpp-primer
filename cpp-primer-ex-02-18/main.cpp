#include <iostream>

using namespace std;

int main()
{
    double n = 3.14;
    double *pn = &n;
    double x = 6.18;
    cout << "n is " << n << endl;
    cout << "*pn is " << *pn << endl;
    cout << "x is " << x << endl;
    pn = &x;
    cout << "*pn reassigned to x" << endl;
    cout << "n is " << n << endl;
    cout << "*pn is " << *pn << endl;
    cout << "x is " << x << endl;

    *pn  = 13.00;
    cout << "x reassigned to 13.00 through *pn" << endl;
    cout << "n is " << n << endl;
    cout << "*pn is " << *pn << endl;
    cout << "x is " << x << endl;

    return 0;
}
