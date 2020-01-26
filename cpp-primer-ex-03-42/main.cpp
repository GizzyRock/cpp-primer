#include <iostream>
#include <vector>

using std::endl;
using std::cout;
using std::vector;
using std::begin;
using std::end;

int main()
{
    vector<int> ivec = {5,4,3,2,1,0};
    int intArr[6] = {};
    auto beg = ivec.begin();
    for (int *ibeg = begin(intArr); ibeg != end(intArr); ++ibeg){
        *ibeg = *beg;
        ++beg;
    }
    for (int i : intArr){
        cout << i << endl;
    }
    return 0;
}
