#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "readuode.h"

int main()
{
	std::vector<std::string> allLines = {};

	read_uode("script.uo", allLines);

	for (auto element : allLines)
	{
		std::cout << element << std::endl;
	}
}
