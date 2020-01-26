#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
    vector<string> text;
    string testText1 = "This is a test, this is only a test.";
    string testSpace1;
    string testText2 = "Still a test.";
    string testSpace2;

    text.push_back(testText1);
    text.push_back(testSpace1);
    text.push_back(testText2);
    text.push_back(testSpace2);

    for (auto it = text.begin(); it != text.end() && !it->empty(); ++it){
        for (auto &w : *it){
            w = toupper(w);
        }
        cout << *it << endl;
    }
    return 0;
}
