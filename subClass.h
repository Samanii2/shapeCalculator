#include "superClass.h"
#ifndef SUBCLASS_H__
#define SUBCLASS_H__

class circle : public shape
{
    private:
        double radius;

    public:
        circle( std::string n, double r);
        void setRadius( double r);
        double getRadius() const;
        double getArea() const;
};

class rectangle : public shape
{
    private:
        double length;
        double width;

    public:
        rectangle( std::string n, double l, double w);
        void setLength( double l);
        void setWidth( double w);
        double getLength() const;
        double getWidth() const;
        double getArea() const;
};

class triangle : public shape
{
    private:
        double base;
        double width;

    public:
        triangle( std::string n, double b, double w);
        void setBase( double b);
        void setWidth( double w);
        double getBase() const;
        double getWidth() const;
        double getArea() const;
};

class cube : public shape
{
    private:
        double length;
        double width;
        double height;

    public:
        cube( std::string n, double l, double w, double h);
        void setLength( double l);
        void setWidth( double w);
        void setHeight( double h);
        double getLength() const;
        double getWidth() const;
        double getHeight() const;
        double getVolume() const;
};

#endif