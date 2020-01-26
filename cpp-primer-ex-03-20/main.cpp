#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    cout << "Enter a series of integers separated by whitespace. " << endl;
    cout << "Input ctrl+z followed by enter to end. " << endl;
    int intVal;
    vector<int> intVect;
    while (cin >> intVal){
        intVect.push_back(intVal);
    }
    for(int i=0; i<intVect.size(); ++i){
        if((i + 1)<intVect.size()){
            cout << (intVect[i] + intVect[i+1]) << endl;
        }
    }
    return 0;
}
