#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> ivec{1,2,3,4,5,6,7,8,9,10};
    for (auto i = ivec.begin(); i != ivec.end(); ++i){
        *i = *i * 2;
        cout << *i << endl;
    }
    return 0;
}
