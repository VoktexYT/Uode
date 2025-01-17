#pragma once

#include <vector>
#include <string>


class Keywords
{
    public:
        std::string parentLine;
        int level = 0;

        Keywords(std::string parentLine);
        
        void add_child(std::string childLine);

        std::vector<std::string> get_childs();

    private:
        std::vector<std::string> childs;

        void calculate_level();

};