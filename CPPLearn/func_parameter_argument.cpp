#include <iostream>

// Define get_emergency_number() below:
void get_emergency_number(std::string emergency_number){
    // emergency_number here is a parameter
  std::cout << "Dial" << emergency_number;
}


int main() {
  
  // Original emergency services number 
  std::string old_emergency_number = "999";
  
  // For nicer ambulances, faster response times
  // and better-looking drivers
  std::string new_emergency_number = "0118 999 881 999 119 725 3";
  
  // Call get_emergency_number() below with
  // the number you want!
  // old_emergency_number here is a argument
  get_emergency_number(old_emergency_number);
  
  
}