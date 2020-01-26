#include <iostream>
#include <vector>

using std::endl;
using std::cout;
using std::vector;
using std::begin;
using std::end;

int main()
{
    int intArr[] = {0,1,2,3,4};
    vector<int> ivec (begin(intArr), end(intArr));
    for (int i : ivec){
        cout << i << endl;
    }
    return 0;
}
