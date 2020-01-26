#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> ivec1 = {0,1,1,2,3,5,8,9}, ivec2 = {0,1,1,2,3,5,8};
    bool samesofar = true;
    decltype(ivec1.size()) sz = (ivec1.size() > ivec2.size() ? ivec2.size() : ivec1.size());
    for (decltype(ivec1.size()) i = 0; i < sz && samesofar; ++i){
        if(ivec1[i] != ivec2[i]){
            samesofar = false;
        }
    }
    cout << samesofar << endl;
    return 0;
}
