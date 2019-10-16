#pragma once
#include "Figure.h"

class Rectangle : public Figure
{
private:
    double a;
    double b;
public:
    Rectangle();
    void calcArea() const;
};
