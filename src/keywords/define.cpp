#include <vector>
#include <string>
#include <iostream>

#include "../../includes/define.h"
#include "../../includes/name.h"
#include "../../includes/constant.h"
#include "../../includes/rwuode.h"
#include "../../includes/tools.h"

// define number = 10
// 10, TRUE, FALSE, ""

std::string typeOfValue(std::string val)
{
    if (val.at(0) == '"' && val.at(val.size()-1) == '"')
    {
        return "string";
    }

    else if (val == "true" || val == "false")
    {
        return val;
    }

    else
    {
        // check if is a number
        bool isNumber = true;

        for (auto c : val)
        {
            bool findNumber = false;

            for (auto n : NUMBERS)
            {
                if (c == n)
                {
                    findNumber = true;
                    break;
                }    
            }

            if (!findNumber)
            {
                isNumber = false;
            }
        }

        if (isNumber)
        {
            return "int";
        }
    }

    return "Null";
}

bool keyword_define(std::vector<std::string> line, std::string& errMsg)
{
    std::string name = line.at(1);

    if (!nameChecker(name))
    {
        errMsg = "Incorrect name in variable declaration '" + name + "'";
        return false;
    }

    std::string newLine = "int " + name;


    if (line.size() > 3)
    {
        std::string equal = line.at(2);

        if (equal != EQUAL)
        {
            errMsg = "Incorrect symbol after variable declaration '" + equal + "'";
            return false;
        }

        std::string value = line.at(3);

        newLine += equal + value + ";";
    }

    else
    {
        newLine += ";";
    }

    write_uode("Uode/out.cpp", newLine, true);

    return true;
}