#include <string>
#include "superClass.h"

shape::shape(std::string s)
{name = s; }

void shape::setName( std::string s)
{ name = s; }

std::string shape::getName() const
{ return name; }

