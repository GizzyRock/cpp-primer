#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::runtime_error;

int main()
{
    int num, denom, div;
    cout << "Enter a numerator: ";
    cin >> num;
    cout << "\nEnter a denominator: ";
    cin >> denom;
    if (denom == 0){
        throw runtime_error("Cannot divide by zero.");
    }
    div = (num/denom);
    cout << num << "/" << denom << " = " << div << endl;
    return 0;
}
