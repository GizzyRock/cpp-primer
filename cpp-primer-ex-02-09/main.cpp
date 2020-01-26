#include <iostream>

using namespace std;

int main()
{
    // cin >> int input_value; error: expected primary-expression before 'int'
    int i = ( 3.14 );
    cout << i << endl; // outputs 3
    // double salary = wage = 9999.99 error: wage was not declared in this scope
    int x = 3.14;
    cout << x << endl; // outputs 3

    return 0;
}
