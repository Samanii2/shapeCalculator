#include <iostream>
#include <string>
#include <limits>
#include <algorithm>
#include "functions.h"
#include <map>

double safeDoubleInput(std::string s, double d) 
{
    std::replace(s.begin(), s.end(), ',' , '.');

    while (std::cout << "Input " + s + ": " && !(std::cin >> d)) 
    {
    std::cin.clear(); //clear bad input flag
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //discard input
    std::cout << "Invalid input; please re-enter.\n";
    }
    return d;
}

void replaceCommasToDots(std::string& s)
{
    std::replace(s.begin(), s.end(), ',' , '.');
}

