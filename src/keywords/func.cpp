#include <vector>
#include <string>
#include <iostream>

#include "../../includes/func.h"
#include "../../includes/name.h"
#include "../../includes/constant.h"
#include "../../includes/rwuode.h"
#include "../../includes/tools.h"


bool keyword_func(std::vector<std::string> line, std::string& errMsg)
{
    if (line.size() < 2)
    {
        errMsg = "Size of ??";
        return false;
    }

    std::string keyword = line.at(0);
    std::string name = line.at(1);

    if (keyword != FUNC)
    {
        errMsg = INVALID_KEYWORD_ERROR;
        return false;
    }

    std::string nameWithoutParentaise = "";
    bool inParentaise = false;
    bool separateParam = true;

    for (auto letter : name)
    {
        if (letter == '(')
        {
            inParentaise = true;
            separateParam = false;
        }

        else if (letter == ')' && inParentaise)
        {
            inParentaise = false;
        }

        else
        {
            nameWithoutParentaise += letter;
        }
    }

    if (!nameChecker(nameWithoutParentaise))
    {
        errMsg = "Incorrect name in variable declaration '" + name + "'";
        return false;
    }

    std::string newLine = "int " + nameWithoutParentaise + "() {}";

    if (nameWithoutParentaise == FUNC_MAIN)
    {
        newLine = "int main(){";
    }

    write_uode("Uode/out.cpp", newLine, true);

    return true;
}