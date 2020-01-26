#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::runtime_error;
using std::string;

int main()
{
    int num, denom, div;
    cout << "Enter a numerator: ";
    cin >> num;
    cout << "\nEnter a denominator: ";
    while (cin >> denom){
        try{
            if (denom == 0){
                throw runtime_error("Cannot divide by zero.");
            }
            div = (num/denom);
            cout << num << "/" << denom << " = " << div << endl;
            break;
        } catch (runtime_error err){
            cout << err.what() << '\n'
                 << "Would you like to input a new value for denominator? \n"
                 << "Enter y or n: " << endl;
            char c;
            cin >> c;
            if (!cin || c == 'n')
                break;
        }
    }
    return 0;
}
