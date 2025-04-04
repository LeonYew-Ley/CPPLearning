#include <iostream>

//hpp saved the declaration codes
#include "fns.hpp"

/*
double average(double num1, double num2);
int tenth_power(int num);
bool is_palindrome(std::string text);
 */

int main()
{
    std::cout << is_palindrome("noon") << "\n";
    std::cout << tenth_power(4) << "\n";
    std::cout << average(4.0, 7.0) << "\n";
}

/*
need to compile two files still.
g++ main.cpp fns.cpp
*/