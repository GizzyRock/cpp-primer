#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string currentString, previousString;
    bool eoiBool = false;
    while (cin >> currentString){
        if (currentString == previousString){
            cout << '\n' << currentString << " was repeated in succession. " << endl;
            eoiBool = true;
            break;
        }
        else{
            previousString = currentString;
        }
    }
    if(!eoiBool){
        cout << "No words were repeated twice in succession. " << endl;
    }
    return 0;
}
