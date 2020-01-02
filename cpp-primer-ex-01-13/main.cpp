#include <iostream>

int main()
{
    int sum = 0;
    for (int val = 50; val<=100; ++val){
        sum += val;
    }
    std::cout << "The sum of numbers between 50 and 100 is " << sum
              << std::endl;

    for (int val1 = 10; val1>=0; --val1){
        std::cout<< val1 << std::endl;
    }

    int val2 = 0, val3 = 0;
    std::cout << "\nEnter two integers, the first smaller than the second."
              << std::endl;
    std::cin >> val2 >> val3;
    std::cout << "\nThe numbers in range of " << val2 << " and " << val3
              << " are:" << std::endl;
    for (val2; val2<=val3; ++val2){
        std::cout << val2 << std::endl;
    }
}
