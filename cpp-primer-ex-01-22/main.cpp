#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item sum;
    if (std::cin >> sum)
    {
        Sales_item adder;
        while (std::cin >> adder)
        {
            if (sum.isbn() == adder.isbn())
                sum += adder;
            else
            {
                std::cout << sum << std::endl;
                sum = adder;
            }
        }
        std::cout << sum << std::endl;
    }
    else
    {
        std::cerr << "Error: no data." << std::endl;
        return -1;
    }

    return 0;
}
