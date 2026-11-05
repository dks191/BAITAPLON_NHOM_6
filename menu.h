#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <windows.h>
#include <conio.h>

using namespace  std;
const string xanh = "\033[32m";
const string reset = "\033[0m";
const string vang = "\033[33m";

void inmenu( ::vector< ::string> &menu,int choice);

int getchoice( ::vector< ::string> &menu);

