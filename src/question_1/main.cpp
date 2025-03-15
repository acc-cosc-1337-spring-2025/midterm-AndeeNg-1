#include <iostream>
#include "question1.h"

int main()
{
    int num;
    char choice;

    do {
        std::cout << "Enter a number between 1 and 15: ";
        std::cin >> num;

        while (num < 1 || num > 15) {
            std::cout << "Invalid input. Please enter a number between 1 and 15: ";
            std::cin >> num;
        }

        std::string sequence = get_fib_sequence(num);
        std::cout << "Fibonacci sequence: " << sequence << std::endl;

        std::cout << "Do you want to continue? (y/n): ";
        std::cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}