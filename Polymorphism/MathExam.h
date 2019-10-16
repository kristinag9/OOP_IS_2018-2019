#pragma once
#include <vector>
#include "Figure.h"

class MathExam
{
private:
    vector<Figure* > figures;
public:
    MathExam();
    void addFigure(Figure* added);
    void printArea() const;
};
