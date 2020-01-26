#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    string lineOfText;
    cout << "Enter a line of a text. " << endl;
    getline(cin, lineOfText);
    for (auto &c : lineOfText){
        if (isalnum(c)){
            c = 'x';
        }
    }
    cout << lineOfText << endl;
    return 0;
}
