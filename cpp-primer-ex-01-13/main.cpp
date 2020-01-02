#include <iostream>

int main()
{
    int sum = 0;
    for (int val = 50; val<=100; ++val){
        sum += val;
    }
    std::cout << "The sum of numbers between 50 and 100 is " << sum
              << std::endl;
}
