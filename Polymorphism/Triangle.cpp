#include "Triangle.h"

Triangle::Triangle()
{
    this->a = 3;
    this->b = 3;
    this->c = 3;
}
void Triangle::calcArea() const
{
    double s = (a + b + c) / 2;
    cout << "Triangle area: " << sqrt(s * (s - a) * (s - b) * (s - c)) << endl;
}
