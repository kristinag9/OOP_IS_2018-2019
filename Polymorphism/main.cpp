#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"
#include "MathExam.h"

int main()
{
    /*Figure f;
    Triangle t;
    Rectangle rt;
    rt.calcArea();
    t.calcArea();
    f.calcArea();*/

    Figure* triangle = new Triangle();
    Figure* rectangle = new Rectangle();
    Figure* circle = new Circle();
    rectangle->calcArea();
    triangle->calcArea();
    circle->calcArea();

    vector<Figure* > figures;

    MathExam mt;
    mt.addFigure(triangle);
    mt.addFigure(rectangle);
    mt.printArea();

    return 0;
}
