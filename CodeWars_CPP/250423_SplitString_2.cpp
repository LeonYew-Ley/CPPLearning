// Complete the solution so that it splits the string into pairs of two characters. If the string contains an odd number of characters then it should replace the missing second character of the final pair with an underscore ('_').

// Examples:

// * 'abc' =>  ['ab', 'c_']
// * 'abcdef' => ['ab', 'cd', 'ef']

#include <string>
#include <vector>

std::vector<std::string> solution(const std::string &s)
{
    std::vector<std::string> strVec = {}; // store results
    for (size_t i = 0; i < s.length(); i += 2) strVec.push_back(s.substr(i, 2));
    if (s.length() % 2 != 0) strVec[strVec.size() - 1] += "_";
    return strVec;
}