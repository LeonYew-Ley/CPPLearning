// review cpp: Calculate The Weight On Mars
// Gravity On Mars: 3.73m/s^2
// Gravity On Earth: 9.807m/s^2
#include <iostream>
int main(){
    double weightOnEarth;
    double weightOnMars;
    std::cout << "Enter the item weight(kg):";
    std::cin >> weightOnEarth;
    weightOnMars = weightOnEarth * 3.72/9.807;
    std::cout << "The item is " << weightOnMars << " kg on Mars.\n";
    std::cout << "The rate between Earth and Mars is:" << 3.73/9.807;

}