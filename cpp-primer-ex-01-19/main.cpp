#include <iostream>

using namespace std;

int main()
{
    int val1 = 0, val2 = 0, holder = 0;
    std::cout << "This program will print all integers in the specified range."
              << std::endl;
    std::cout << "\nEnter two integers."
              << std::endl;
    std::cin >> val1 >> val2;
    if(val1 > val2){
        holder = val1;
        val1 = val2;
        val2 = holder;
    }
    std::cout << "\nThe numbers in range of " << val1 << " and " << val2
              << " are:" << std::endl;
    for (val1; val1<=val2; ++val1){
        std::cout << val1 << std::endl;
    }
    return 0;
}
