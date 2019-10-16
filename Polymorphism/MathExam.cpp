#include "MathExam.h"

MathExam::MathExam() {}
void MathExam::addFigure(Figure* added)
{
    figures.push_back(added);
}
void MathExam::printArea() const
{
    for(size_t i = 0; i < figures.size(); i++)
    {
        figures[i]->calcArea();
    }
}
