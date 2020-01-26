#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    string line;
    string total;
    cout << "Start typing. Using 'Enter' to separate lines. " << endl;
    cout << "Type ctrl+z followed by enter to have the program print what was written.\n" << endl;
    while(getline(cin, line)){
        total = total + "\n" + line;
    }
    cout << total;

    // For reading a word at a time, change while condition to (cin << line)
    return 0;
}
