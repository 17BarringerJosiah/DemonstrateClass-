// <CLASS CREATION PROGRAM ASSIGNMENT> -- purpose of this assignment is to give you some practice with creating your own classes
//CSIS 212-<D02>
//<Citationss> -- used the examples provided in the assignment instructions

#include <iostream>     // Include the input/output stream library
#include "Circle.h"     // Include the header file for the Circle class

int main() {            // Main function definition

    std::cout << "Josiah Barringer -- Lab 2 - Class Creation" << std::endl; 

    Circle circle;      // Create an instance of the Circle class

    int radius;         // Variable to store the radius input by the user
    std::string colorFill;  // Variable to store the fill color input by the user

    while (true) {      // Start an infinite loop
        std::cout << "Enter the radius (-1 to exit): ";  // Prompt the user to enter the radius
        std::cin >> radius;  // Read the radius input by the user
        if (radius == -1)   // Check if the user entered -1 to exit the loop
            break;          // Exit the loop if the user entered -1

        circle.setRadius(radius);  // Set the radius of the circle object to the value entered by the user

        std::cin.ignore();  // Ignore newline character
        std::cout << "Enter the fill color: ";  // Prompt the user to enter the fill color
        std::getline(std::cin, colorFill);  // Read the fill color input by the user

        circle.setColorFill(colorFill);  // Set the fill color of the circle object to the value entered by the user

        circle.displayCircleInfo();  // Display information about the circle

        std::cout << "Press Enter to continue...";  // Prompt the user to press Enter to continue
        std::cin.ignore();  // Ignore newline character
        std::cin.get();     // Wait for the user to press Enter
    }

    return 0;  // Return 0 to indicate successful program execution
}



