#include <vector>
#include <string>
#include <iostream>

#include "../includes/tools.h"
#include "../includes/constant.h"


std::vector<std::string> cut_line(std::string line, char separator)
{
    std::vector<std::string> result;
    std::string word;

    for (auto letter : line)
    {
        if (letter == separator && !word.empty())
        {
            result.push_back(word);
            word = "";
        }

        else
        {
            word.push_back(letter);
        }
    }

    result.push_back(word);

    return result;
}

std::string remove_space(std::string str)
{
    std::string newStr = "";

    for (auto c : str)
    {
        switch (c)
        {
            case SPACE:
            case TAB:
                break;
            
            default:
                newStr += c;
                break;
        }
    }

    return newStr;
}


void print_line(std::vector<std::string> vec) 
{
    for (size_t i = 0; i < vec.size(); ++i) 
    {
        std::cout << vec[i] << " ";
    }

    std::cout << std::endl;
}