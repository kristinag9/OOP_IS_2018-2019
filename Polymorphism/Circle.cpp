#include "Circle.h"

Circle::Circle()
{
    this->radius = 4;
}
void Circle::calcArea() const
{
    cout << "Circle area: " << 3.14 * radius * radius << endl;
}
