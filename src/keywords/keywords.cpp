#include <vector>
#include <string>
#include <iostream>

#include "../../includes/keywords.h"


void Keywords::add_child(std::string childLine)
{
    childs.push_back(childLine);
}

Keywords::Keywords(std::string parentLine) : parentLine(parentLine)
{
    calculate_level();
}

std::vector<std::string> Keywords::get_childs()
{
    return childs;
}

void Keywords::calculate_level()
{
    bool afterKeyword = true;

    for (char c : parentLine)
    {
        if (c == ' ' && afterKeyword)
        {
            level++;
        }

        else
        {
            afterKeyword = false;
        }
    }

    level /= 4;
}



