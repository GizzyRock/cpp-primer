#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    cout << "Type as much or as little as you like." << endl;
    cout << "Input ctrl+z followed by Enter to quit.\n" << endl;
    string textInput;
    string totalInput;
    while(cin>>textInput){
        totalInput = totalInput + " " + textInput; // change this line to totalInput += textInput for the other part
    }
    cout << totalInput << endl;
    return 0;
}
