//
//  main.cpp
//  Activity-22
//
//  Created by Juwon Hong on 10/19/24.
//

#include <iostream>
#include <string>
#include "function.h"

using namespace std;

int main() {
    // Set the full, first, and last name
    string fullName = "Juwon Hong";
    string firstName, lastName;

    // Split the first and last name
    splitName(fullName, firstName, lastName);

    // Print first name and last name
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;

    // Greeting full name
    greet(fullName);

    return 0;
}
