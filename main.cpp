#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "readuode.h"
#include "cutLine.h"


int main()
{
	std::vector<std::string> allLines = {};

	read_uode("./Uode/script.uo", allLines);

	for (auto element : allLines)
	{
		std::vector<std::string> line = cutLine(element, ' ');

		std::cout << line[0] << std::endl;
	}
}
