// Copyright J.E. Gonzalez. All rights reserved

#define _USE_MATH_DEFINES
#include <iostream>

/**
* Debugging in Visual Studio lecture code
* @return Exit status
*/

int main() {

    float Angle;

    // prompt for and get angle
    std::cout << "Enter angle in degrees: ";
    std::cin >> Angle;

    // convert angle to gradients
    Angle *= M_PI / 180;

    //Calculate and print cos and sin
    std::cout << "Cos: " << cosf(Angle) << "\n";
    std::cout << "Sin: " << sinf(Angle) << "\n";
}