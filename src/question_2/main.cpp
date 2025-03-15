#include <iostream>
#include <limits>
#include "question2.h"

int main()
{
    double gpa;
    std::string letter_grade;
    
    while (true)
    {
        std::cout << "Enter GPA (0 to 4) or -1 to quit: ";
        std::cin >> gpa;
        
        if (gpa == -1)
        {
            std::cout << "Thank you, Goodbye!" << std::endl;
            break;
        }
        
        if (gpa < 0.0 || gpa > 4.0 || std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input! Please enter a GPA between 0.0 and 4.0." << std::endl;
            continue;
        }
      
        letter_grade = gpa_to_letter_grade(gpa);
        
        std::cout << "Your letter grade is: " << letter_grade << std::endl;
    }

    return 0;
}