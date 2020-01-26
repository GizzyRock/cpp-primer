#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string rsp;
    do {
        cout << "Please enter two words: ";
        string s1, s2;
        cin >> s1 >> s2;
        if (s1 < s2){
            cout << s1 << " is smaller than " << s2 << ". " << endl;
        }
        else{
            cout << s2 << " is smaller than " << s1 << ". " << endl;
        }
        cout << "Input yes to continue or no to quit. " << endl;
        cin >> rsp;
    } while (!rsp.empty() && rsp[0] != 'n' && rsp[0] != 'N');
    return 0;
}
