#include <iostream>
#include <fstream>
#include <vector>
#include "readuode.h"


void read_uode(std::string fileName, std::vector<std::string>& allLines)
{
	std::cout << "Read Uode! On " << fileName << " file" << std::endl;
	std::ifstream readF;

	readF.open(fileName);

	if (readF.is_open())
	{
		std::string line;
		while (std::getline(readF, line))
		{
			allLines.push_back(line);
		}
	}
	
	else
	{
		std::cout << "Err" << std::endl;
	}
}
