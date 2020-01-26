#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout << "Enter integer values. Inputting '42' will cause the program to stop." << endl;
    int val;
    while(val != 42){
        cin >> val;
    }
    return 0;
}
