#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    int num;
    vector<int> intVals;
    cout << "Enter integer values separated by white spaces. " << endl;
    cout << "Input ctrl+z followed by Enter to end. " << endl;
    while (cin >> num){
        intVals.push_back(num);
    }
    for( int i : intVals ){
        cout << i << endl;
    }
    return 0;
}
