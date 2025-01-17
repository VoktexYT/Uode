#include <iostream>
#include <fstream>
#include <vector>

#include "../includes/rwuode.h"


void read_uode(std::string fileName, std::vector<std::string>& allLines)
{
	std::ifstream readF;

	readF.open(fileName);

	if (readF.is_open())
	{
		std::string line;
		while (std::getline(readF, line))
		{
			allLines.push_back(line);
		}
		readF.close();
	}
	
	else
	{
		std::cout << "Err" << std::endl;
	}
}

void write_uode(std::string fileName, std::string line, bool appendLine)
{
    std::ofstream readF(fileName, appendLine ? std::ofstream::app : std::ofstream::trunc);

	if (readF.is_open())
	{
		readF << line;
	}
	
	else
	{
		std::cout << "Err when open file" << std::endl;
	}

	readF.close();

}
