#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
    vector<int> intVec;
    int input;
    cout << "Input a series of integers separated by white space. " << endl;
    cout << "Input ctrl+z followed by Enter to end. " << endl;
    while(cin >> input){
        intVec.push_back(input);
    }
    for(auto &i : intVec){
        ((i % 2) != 0) ? (i *= 2) : i;
        cout << i << endl;
    }
    return 0;
}
