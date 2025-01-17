#pragma once

#include <iostream>
#include <vector>

void read_uode(std::string fileName, std::vector<std::string>& allLines);
void write_uode(std::string fileName, std::string line, bool appendLine);
