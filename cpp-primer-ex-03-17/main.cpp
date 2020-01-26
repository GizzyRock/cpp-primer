#include <iostream>
#include <vector>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    cout << "Enter a series of lowercase words followed by whitespace. " << endl;
    cout << "Input ctrl+z followed by enter to end. " << endl;
    string word;
    vector<string> words;
    int count = 0;
    while (cin >> word){
        words.push_back(word);
    }
    for (string w : words){
        for (auto &c : w){
            c = toupper(c);
        }
        cout << w << " ";
        ++count;
        if ((count % 8) == 0){
            cout << endl;
        }
    }
    return 0;
}
