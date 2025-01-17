#pragma once

#include <vector>
#include <string>

const char SPACE = ' ';
const char TAB = '\t';
const std::string EQUAL = "=";

const std::string INVALID_KEYWORD_ERROR = "invalidKeywordError";

/*

variable : define, const
condition : if, case, otherwise, not, is, <, >, <=, =>, &&, ||, 
boucle : enum, repeat, while, break
function : func, return

comment : # one line comment
          ### multiple
                line
            comment
         ###

library : import, from

exemple code

-----
import "astream"

func main
    ostream("Hello World")

    define name = istream("What's your name ? ")

    # display each letter of name
    enum letter in name
        if letter is "\n"
            break
        otherwise
            ostream(letter)
    
    # other loop
    repeat 10 as i
        ostream(i)

    # other loop
    define year = -1

    while year < 0
        define year = istream("What's your age ? ")

        year = <int year>

        if year < 12
            ostream("You're a child!")
    
        case year >= 12 && year <= 17
            ostream("You're a teen!")
    
        otherwise
            ostream("You're major!")

    return

*/