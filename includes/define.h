#pragma once

#include <vector>
#include <string>

const std::string DEFINE = "define";

bool keyword_define(std::vector<std::string> line, std::string& errMsg);
