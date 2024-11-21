//
//  function.cpp
//  Activity-22
//
//  Created by Juwon on 10/23/24.
//

#include <iostream>
#include <string>
#include "function.h"

// Function to print a greeting
void greet(const std::string& name) {
    std::cout << "Hello, " << name << std::endl;
}

// Function to split the full name into first name and last name
void splitName(const std::string& fullName, std::string& firstName, std::string& lastName) {
    size_t spaceIndex = fullName.find(' ');
    firstName = fullName.substr(0, spaceIndex);
    lastName = fullName.substr(spaceIndex + 1);
}
