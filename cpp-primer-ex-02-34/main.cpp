#include <iostream>

using namespace std;

int main()
{
    int i = 4, &r = i;
    auto a = r;
    const int ci = i, &cr = ci;
    cout << "The value of 'a' is " << a << endl;
    cout << "The value of 'i' is " << i << endl;
    cout << "The value of 'r' is " << r << endl;
    cout << "The value of 'ci is " << ci << endl;
    cout << "The value of 'cr' is " << cr << endl;

    cout << "\nauto b = ci\nauto c = cr\nauto d = &i\nauto e = &ci " << endl;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;
    const auto f = ci;
    auto &g = ci;

    cout << "The value of 'b' is " << b << endl;
    cout << "The value of 'c' is " << c << endl;
    cout << "The value of '*d' is " << *d << endl;
    cout << "The value of '*e' is " << *e << endl;
    cout << "The value of 'f' is " << f << endl;
    cout << "The value of 'g' is " << g << endl;

    cout << "\na, b, c, d, e, and g changed to = 42." << endl;
    cout << "Assignment of d, e, and g fails.\n" << endl;
    a = 42;
    b = 42;
    c = 42;
    //d = 42; error: invalid conversion from int to int*
    //e = 42; error: invalid conversion from int to 'const int*'
    //g = 42; error: assignment of read-only reference 'g'

    cout << "The value of 'a' is " << a << endl;
    cout << "The value of 'i' is " << i << endl;
    cout << "The value of 'r' is " << r << endl;
    cout << "The value of 'ci is " << ci << endl;
    cout << "The value of 'cr' is " << cr << endl;
    cout << "The value of 'b' is " << b << endl;
    cout << "The value of 'c' is " << c << endl;
    cout << "The value of '*d' is " << *d << endl;
    cout << "The value of '*e' is " << *e << endl;
    cout << "The value of 'f' is " << f << endl;
    cout << "The value of 'g' is " << g << endl;

    return 0;
}

