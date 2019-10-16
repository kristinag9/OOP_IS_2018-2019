#pragma once
#include <iostream>
#include <cmath>

using namespace std;

class Figure
{
public:
    Figure() {}
    virtual void calcArea() const = 0;
};
