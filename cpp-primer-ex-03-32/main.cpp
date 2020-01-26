#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> iv;
    for (int i = 0; i < 10; ++i){
        iv.push_back(i);
    }
    for (auto i : iv){
        cout << iv[i] << endl;
    }
    return 0;
}
