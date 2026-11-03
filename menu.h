#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <windows.h>
#include <conio.h>

const std::string xanh = "\033[32m";
const std::string reset = "\033[0m";
const std::string vang = "\033[33m";

void inmenu(std::vector<std::string> &menu,int choice);

int getchoice(std::vector<std::string> &menu);

