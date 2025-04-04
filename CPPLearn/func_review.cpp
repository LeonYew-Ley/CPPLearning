#include <iostream>

std::string input_request(std::string input)
{
    std::cout << "Enter your name or type 'exit' to end process:";
    std::cin >> input;
    return input;
}
std::string it_standard_reply(std::string input)
{
    std::string on_off_attempt;
    std::cout << "Hello. IT.\n";
    std::cout << "Have you tried turning it off and on again? y/n\n";
    std::cin >> on_off_attempt;
    input = input_request(input);
    return input;
}

int main()
{
    std::string input;
    input = it_standard_reply(input);
    while (input != "exit")
    {
        std::cout << "Oh hi " << input << "!\n";
        it_standard_reply(input);
    }
}