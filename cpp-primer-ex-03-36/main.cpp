#include <iostream>
#include <vector>

using std::endl;
using std::cout;
using std::vector;
using std::begin;
using std::end;

int main() {
  int a1[5];
  int a2[5];
  for (int i = 0; i != 5; ++i)
    cin >> a1[i];
  for (int i = 0; i != 5; ++i)
    cin >> a2[i];

  int i = 0;
  for (; i != 5; ++i)
    if (a1[i] != a2[i]) {
      cout << "Array a1 is not equal to array a2." << std::endl;
      break;
    }
  if (i == 5)
    cout << "Array a1 is equal to array a2." << std::endl;


  vector<int> v1;
  vector<int> v2;
  int t;
  for (int i = 0; i != 5; ++i) {
    cin >> t;
    v1.push_back(t);
  }
  for (int i = 0; i != 5; ++i) {
    cin >> t;
    v2.push_back(t);
  }

  if (v1 == v2)
    cout << "Vector v1 is equal to vector v2." << std::endl;
  else
    cout << "Vector v1 is not equal to vector v2." << std::endl;

  return 0;
}
