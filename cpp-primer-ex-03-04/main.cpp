#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    string string1;
    string string2;
    cout << "This program compares two strings to determine which is larger and which is longer." << endl;
    cout << "\nType in each string followed by Enter." << endl;
    getline(cin, string1);
    getline(cin, string2);

    if(string1 == string2){
        cout << "The two strings are the same. " << endl;
    }
    else {
        if(string1 > string2){
            cout << "\n" << string1 << "\nis larger than \n" << string2 << endl;
        }
        else if(string2 > string1) {
            cout << "\n" << string2 << "\nis larger than \n" << string1 << endl;
        }
        if(string1.size() == string2.size()){
            cout << string1 << "\nis of equal length to \n" << string2 << endl;
        }
        else if(string1.size() > string2.size()){
            cout << "\n" << string1 << "\nis longer than \n" << string2 << endl;
        }
        else if(string2.size() > string1.size()) {
            cout << "\n" << string2 << "\nis larger than \n" << string1 << endl;
        }
    }

    return 0;
}
