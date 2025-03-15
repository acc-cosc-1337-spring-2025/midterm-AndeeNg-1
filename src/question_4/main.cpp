#include <iostream>
#include "question4.h"

int main()
{
    int n;
    
    while (true)
    {
        std::cout << "Please enter a number between 1 and 15 to get the Fibonacci number (or type 0 to exit): ";
        std::cin >> n;

        if (n == 0)
        {
            std::cout << "Goodbye and Thank you for using!" << std::endl;
            break;
        }

        if (n < 1 || n > 15)
        {
            std::cout << "Invalid input! Please enter a number between 1 and 15." << std::endl;
            continue;
        }

        int fib_number = get_fib_number(n);

        std::cout << "The Fibonacci number at position " << n << " is " << fib_number << std::endl;
    }

    return 0;
}