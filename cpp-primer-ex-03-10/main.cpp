#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string totalText;
    string lineText;
    string totalTextNoPunc;
    cout << "Enter text below. Once done, input ctrl+z followed by Enter." << endl;
    cout << "The text you enter will be printed out, but without punctuation." << endl;
    while (getline(cin, lineText)){
        totalText += lineText;
    }
    for (auto &c : totalText){
        if(!ispunct(c)){
            totalTextNoPunc += c;
        }
    }
    cout << totalTextNoPunc << endl;
    return 0;
}
