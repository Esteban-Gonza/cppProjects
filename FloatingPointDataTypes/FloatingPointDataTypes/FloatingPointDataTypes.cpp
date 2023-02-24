#include <iostream>

int main(){

    int Score{ 1360 };
    int TotalSeconsPlayed{ 10000 };

    //Calculate and print points per second
    float PointsPerSecond = (float)Score / TotalSeconsPlayed;
    std::cout << "Points Per Second: " << PointsPerSecond << "\n";
}