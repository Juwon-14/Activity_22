//
//  main.cpp
//  Activity-22
//
//  Created by Juwon Hong on 10/19/24.
//

#include <iostream>
#include <string>
#include "function.h"

int main() {
    // Set the full, first, and last name
    std::string fullName = "Juwon Hong";
    std::string firstName, lastName;

    // Split the first and last name
    splitName(fullName, firstName, lastName);

    // Print first name and last name
    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;

    // Greeting full name
    greet(fullName);

    return 0;
}
