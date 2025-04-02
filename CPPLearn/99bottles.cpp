#include <iostream>

int main()
{
  int sum = 99;
  for (sum; sum > 0; sum--)
  {
    std::cout << sum << " bottles of pop on the wall.\n";
    std::cout << "Take one down and pass it around.\n";
  }
}