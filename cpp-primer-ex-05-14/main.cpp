#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    int currentCount = 1, mostCount  = 0;
    string lastWord, currentWord, mostWord;
    while (cin >> currentWord){
        if (currentWord == lastWord){
            currentCount += 1;
            if (currentCount > mostCount){
                mostCount = currentCount;
                mostWord = currentWord;
            }
        }
        else {
            lastWord = currentWord;
            currentCount = 1;
        }
    }
    cout << "The word: '" << mostWord << "' occurred " << mostCount << " times." << endl;
    return 0;
}
