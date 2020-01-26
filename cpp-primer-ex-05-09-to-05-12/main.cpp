#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main()
{
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, newlineCnt = 0,
             tabCnt = 0, spaceCnt = 0, ffCnt = 0, flCnt = 0, fiCnt = 0;
    char ch;
    bool fPresent = false;
    while (cin >> std::noskipws >> ch){
        if (ch == 'a' || ch == 'A'){
            ++aCnt;
        }
        if (ch == 'e' || ch == 'E'){
            ++eCnt;
        }
        if (ch == 'i'){
            ++iCnt;
            if(fPresent == true){
                ++fiCnt;
            }
        }
        if (ch == 'I'){
            ++iCnt;
        }
        if (ch == 'o' || ch == 'O'){
            ++oCnt;
        }
        if (ch == 'u' || ch == 'U'){
            ++uCnt;
        }
        if (ch == ' '){
            ++spaceCnt;
        }
        if (ch == '\n'){
            ++newlineCnt;
        }
        if (ch == '\t'){
            ++tabCnt;
        }
        if (ch == 'l'){
            if(fPresent == true){
                ++flCnt;
            }
        }
        if (ch == 'f'){
            if (fPresent == true){ // if the previous char
                ++ffCnt;
            }
            fPresent = true;
        }
        else{ // else statement attached to if ch == f
            fPresent = false;
        }


    }
    cout << "Count of 'a' or 'A': " << aCnt << '\n'
         << "Count of 'e' or 'E': " << eCnt << '\n'
         << "Count of 'i' or 'I': " << iCnt << '\n'
         << "Count of 'o' or 'O': " << oCnt << '\n'
         << "Count of 'u' or 'U': " << uCnt << '\n'
         << "Count of 'ff': " << ffCnt << '\n'
         << "Count of 'fl': " << flCnt << '\n'
         << "Count of 'fi': " << fiCnt << '\n'
         << "Count of newline: " << newlineCnt << '\n'
         << "Count of tab: " << tabCnt << '\n'
         << "Count of space: " << spaceCnt << endl;
    return 0;
}
