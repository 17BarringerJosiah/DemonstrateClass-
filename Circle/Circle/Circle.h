// Header guard to prevent multiple inclusion of the header file
#ifndef CIRCLE_H              
#define CIRCLE_H

// Include the string library for string operations
#include <string>             

// Declaration of the Circle class
class Circle {               
private:
    int radius;              
    std::string colorFill;   

public:
    // Declaration of the zero-argument constructor
    Circle();                

    // Member functions
    double calcDiameter() const;         
    double calcArea() const;             
    double calcCircumference() const;    
    void setRadius(int r);               
    int getRadius() const;               
    void setColorFill(const std::string& cf);    
    std::string getColorFill() const;            
    void displayCircleInfo() const;      

};

// End of header guard
#endif // CIRCLE_H     



