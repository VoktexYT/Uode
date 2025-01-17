#pragma once

#include <vector>
#include <string>

const std::string FUNC = "func";
const std::string FUNC_MAIN = "main";

bool keyword_func(std::vector<std::string> line, std::string& errMsg);
