#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string s;
    string s1 = "This is a test. This is only a test.";
    int i = 0;
    double d =1.011;
    char c = 'c';
    int *p = &i;
    vector<int> ivec = {0,1,2,3,4,5,6,7};
    int intArr[3] = {};
    cout << sizeof (s) << endl;
    cout << sizeof (s1) << endl;
    cout << sizeof (i) << endl;
    cout << sizeof (d) << endl;
    cout << sizeof (c) << endl;
    cout << sizeof (p) << endl;
    cout << sizeof (*p) << endl;
    cout << sizeof (ivec) << endl;
    cout << sizeof (intArr) << endl;

    int x[10];
    int *z = x;
    cout << sizeof(x)/sizeof(*x) << endl;
    cout << sizeof(z)/sizeof(*z) << endl;
    return 0;
}
