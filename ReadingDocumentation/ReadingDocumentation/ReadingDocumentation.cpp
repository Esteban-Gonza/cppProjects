// Copyright J.E. Gonzalez. All rights reserved

#define _USE_MATH_DEFINES
#include <iostream>

/**
* Demonstrates reading documentation
* @return Exit status
*/

int main(){
    
    float Angle{ 45 };

    //Convert degrees to radiants
    Angle = Angle * M_PI /180;

    //Calculate and print the cosine of 45 degrees
    float Cosine = cosf(Angle);
    std::cout << "Cousine of " << Angle << " degrees: " << Cosine << "\n";
}