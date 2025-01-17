#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "../includes/rwuode.h"
#include "../includes/tools.h"
#include "../includes/constant.h"

#include "../includes/define.h"
#include "../includes/func.h"

#include "../includes/keywords.h"



std::vector<std::string> get_all_lines()
{
	std::string fileName = "Uode/script.uo";

	std::cout << std::endl << std::endl;

	std::vector<std::string> allLines = {};

	read_uode(fileName, allLines);

	// Clear last content
	write_uode("Uode/out.cpp", "", false);

	return allLines;
}

int main()
{
	std::vector<std::string>	
	
	

	std::vector<Keywords> allLinesComponent = {};

	for (auto element : allLines)
	{
		Keywords line(element);
		allLinesComponent.push_back(line);
	}

}
