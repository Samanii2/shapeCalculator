#include <string>
#include "superClass.h"
#include "subClass.h"

circle::circle( std::string n, double r) : shape (n) 
{ radius = r; }

void circle::setRadius( double r)
{ radius = r; }

double circle::getRadius() const
{ return radius; }

double circle::getArea() const
{ return  radius * radius * 3.14;}

rectangle::rectangle( std::string n, double l, double w) : shape (n) 
{ 
    length = l;
    width = w;
}

void rectangle::setLength( double l)
{ length = l; }

void rectangle::setWidth( double w)
{ width = w; }


double rectangle::getLength() const
{ return length; }

double rectangle::getWidth() const
{ return width; }

double rectangle::getArea() const
{ return length * width; }

triangle::triangle( std::string n, double b, double w) : shape (n) 
{ 
    base = b;
    width = w;
}

void triangle::setBase( double b)
{ base = b; }

void triangle::setWidth( double w)
{ width = w; }


double triangle::getBase() const
{ return base; }

double triangle::getWidth() const
{ return width; }

double triangle::getArea() const
{ return base * width /2; }

cube::cube( std::string n, double l, double w, double h) : shape (n) 
{ 
    length = l;
    width = w;
    height = h;
}

void cube::setLength( double l)
{ length = l; }

void cube::setWidth( double w)
{ width = w; }

void cube::setHeight( double h)
{ height = h; }

double cube::getLength() const
{ return length; }

double cube::getWidth() const
{ return width; }

double cube::getHeight() const
{ return height; }

double cube::getVolume() const
{ return length * width * height; }
