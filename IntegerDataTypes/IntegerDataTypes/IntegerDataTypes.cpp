#include <iostream>

int main(){

    const int MinutesPerSecond{ 60 };

    int total_secomds_played; //SnakeCase
    int totalSeconsPlayed = 100; //CamellCase and assignment statement initializer
    int TotalSeconsPlayed{ 100 }; //PascalCase and brace initializer

    //Calculate minutes and seconds played
    int MinutesPlayed = TotalSeconsPlayed / MinutesPerSecond;
    int SecondsPlayed = TotalSeconsPlayed % MinutesPerSecond;

    //Print the results
    std::cout << "Minutes Played: " << MinutesPlayed << "\n";
    std::cout << "Seconds Played: " << SecondsPlayed << "\n";
}
