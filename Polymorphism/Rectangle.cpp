#include "Rectangle.h"

Rectangle::Rectangle()
{
    this->a = 5;
    this->b = 5;
}
void Rectangle::calcArea() const
{
    cout << "Rectangle area: " << a * b << endl;
}
