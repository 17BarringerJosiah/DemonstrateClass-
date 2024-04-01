#include "Circle.h"  // Include the header file for the Circle class

#include <iostream>   // Include the input/output stream library
#include <iomanip>    // Include the input/output manipulator library for formatting
#include <cmath>      // Include the math library for mathematical operations

// Zero-argument constructor definition
Circle::Circle() {
    radius = 0;
    colorFill = "";
}

// Member function definitions

// Function to calculate and return the diameter of the circle
double Circle::calcDiameter() const {
    return static_cast<double>(radius) * 2.0;
}

// Function to calculate and return the area of the circle
double Circle::calcArea() const {
    const double PI = 3.14;
    return PI * pow(static_cast<double>(radius), 2);
}

// Function to calculate and return the circumference of the circle
double Circle::calcCircumference() const {
    const double PI = 3.14;
    return 2.0 * PI * static_cast<double>(radius);
}

// Function to set the radius of the circle
void Circle::setRadius(int r) {
    if (r >= 1) {
        radius = r;
    }
    else {
        std::cout << "Invalid radius. Radius must be 1.0 or greater." << std::endl;
    }
}

// Function to get the radius of the circle
int Circle::getRadius() const {
    return radius;
}

// Function to set the fill color of the circle
void Circle::setColorFill(const std::string& cf) {
    if (!cf.empty()) {
        colorFill = cf;
    }
    else {
        std::cout << "Invalid colorFill. ColorFill cannot be blank." << std::endl;
    }
}

// Function to get the fill color of the circle
std::string Circle::getColorFill() const {
    return colorFill;
}

// Function to display circle information
void Circle::displayCircleInfo() const {
    std::cout << std::setw(15) << std::left << "Radius:" << std::setw(10) << std::right << radius << std::endl;
    std::cout << std::setw(15) << std::left << "Diameter:" << std::setw(10) << std::right << calcDiameter() << std::endl;
    std::cout << std::setw(15) << std::left << "Area:" << std::setw(10) << std::right << calcArea() << std::endl;
    std::cout << std::setw(15) << std::left << "Circumference:" << std::setw(10) << std::right << calcCircumference() << std::endl;
    std::cout << std::setw(15) << std::left << "Color Fill:" << std::setw(10) << std::right << colorFill << std::endl;
}


