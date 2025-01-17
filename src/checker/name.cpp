#include <string>

#include "../../includes/name.h"

bool nameChecker(std::string name)
{
    bool first = true;

    for (auto letter : name)
    {
        if (first)
        {
            for (auto n : NUMBERS)
            {
                if (letter == n)
                {
                    return false;
                }
            }

            first = false;
        }

        for (auto c : ILLEGAL_CHAR)
        {
            if (letter == c)
            {
                return false;
            }
        }
    }

    return true;
}
