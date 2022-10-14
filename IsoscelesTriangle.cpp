#include "IsoscelesTriangle.h"

IsoscelesTriangle::IsoscelesTriangle(std::string name, int a, int c, int A, int B) 
    : Triangle(name, a, a, c, A, B, A) {
    this->name = name;
    checkFigure();
};

void IsoscelesTriangle::checkFigure() {
    status = setText();
    if (C != A)
        throw IsoscelesTriangleException(status, Errors::ISOSCELES_TRIANGLE_ANGLES_EQ);
    if (a != b)
        throw IsoscelesTriangleException(status, Errors::ISOSCELES_TRIANGLE_SIDES_EQ);
    status = status + " создан";
};

