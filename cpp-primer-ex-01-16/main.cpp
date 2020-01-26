#include <iostream>

using namespace std;

int main()
{
    int product = 1, value = 0;
    cout << "Enter numbers to be multiplied. " << endl;
    cout << "Enter a letter to return the product. " << endl;
    while(cin >> value)
        product *= value;
    cout << "Product is: " << product << endl;
    return 0;
}
