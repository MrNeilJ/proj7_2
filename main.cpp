// This program demonstrates a simple class with member functions
// defined outside the calss declaration.
#include <iostream>
#include <cmath>

// Circle class declaration
class Circle
{
    private:
        double radius;          // This is a member variable.

    public:
        void setRadius(double); // These are just prototypes
        double calcArea();      // for the member functions.
};

// The member function implementation section follows.  It contains the
// actual function definitions for the Circle class member functions.

/*****************************************************************
*                   Circle::setRadius                            *
*   This function copies the argument passed into the parameter  *
*   to the private member variable radius                        *
*****************************************************************/
void Circle::setRadius(double r) {
    radius = r;
}

