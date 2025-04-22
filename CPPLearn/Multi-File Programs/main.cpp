#include <iostream>

// Declaration some funcs here:
void HelloFromFunctions();
int AddTwoNumbers(int num1, int num2);

int main()
{
    HelloFromFunctions();
    std::cout << AddTwoNumbers(3, 8);
}

/*  Link two files while compling!
 g++ main.cpp my_function.cpp
 ./a.out */