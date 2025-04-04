#include <chrono>
#include <iostream>

#include "night.hpp"

int main()
{
    // Measure time taken for goodnight1():
    std::chrono::high_resolution_clock::time_point start =
        std::chrono::high_resolution_clock::now();

    std::cout << goodnight1("tulip");

    std::chrono::high_resolution_clock::time_point end =
        std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> time_span = end - start;

    // Print time taken for goodnight1():
    std::cout << "Time taken for goodnight1(): " << time_span.count()
              << " milliseconds.\n\n";

    std::cout << goodnight2("eraser", "ivy");
}
// before: Time taken for goodnight1(): 0.0258 milliseconds.
// inline after: Time taken for goodnight1(): 0.0232 milliseconds.
// 可能编译器太新了，已经做了优化，比较不出差别。