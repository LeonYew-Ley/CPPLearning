// a weight converter
#include <iostream>
#include <string>

int main() {
  std::cout << "Little Mac, please enter your weight on the earth:";
  double weight;
  std::cin >> weight;
  std::cout << "Okay, Now please enter the planet you want to fight on:";
  std::string planet;
  std::cin >> planet;
  double relativeGravity;
  
  if (planet == "Mercury") {
    relativeGravity = 0.38;
  } else if (planet == "Venus") {
    relativeGravity = 0.91;
  } else if (planet == "Mars") {
    relativeGravity = 0.38;
  } else if (planet == "Jupiter") {
    relativeGravity = 2.34;
  } else if (planet == "Saturn") {
    relativeGravity = 1.06;
  } else if (planet == "Uranus") {
    relativeGravity = 0.92;
  } else if (planet == "Neptune") {
    relativeGravity = 1.19;
  } else {
    relativeGravity = 0;
  }
  
  weight *= relativeGravity;
  if(weight != 0){
    std::cout << "Your weight on the " << planet << " is " << weight << " kg.\n";
  }else{
    std::cout << "Please check the spelling of planets or the planets you input is missing.\n";
  }

}