#pragma once
#include "Figure.h"

class Triangle : public Figure
{
private:
    double a;
    double b;
    double c;
public:
    Triangle();
    void calcArea() const;
};

