#pragma once
#include "Figure.h"

class Circle : public Figure
{
private:
    double radius;
public:
    Circle();
    void calcArea() const;
};
