#include <string>
#include <vector>

#include "cutLine.h"

std::vector<std::string> cutLine(std::string line, char separator)
{
    std::vector<std::string> result;
    std::string word;

    for (int i = 0; i < line.size(); i++)
    {
        char letter = line[i];
        if (letter == separator)
        {
            result.push_back(word);
            word = "";
        }

        else
        {
            word.push_back(letter);
        }
    }

    return result;
}