#include <iostream>
#include "question3.h"

int main()
{
    char choice;
    srand(static_cast<unsigned int>(time(0)));

    while (true)
    {
        std::cout << "Let's roll the dice! (Y for yes, any other key to quit): ";
        std::cin >> choice;

        if (choice != 'Y' && choice != 'y')
        {
            std::cout << "Goodbye!" << std::endl;
            break;
        }

        int roll_result = roll_die();
    
        std::cout << "You've rolled a " << roll_result << std::endl;
    }

    return 0;
}