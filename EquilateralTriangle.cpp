#include "EquilateralTriangle.h"

EquilateralTriangle::EquilateralTriangle(std::string name, int a, int A) 
    : IsoscelesTriangle(name, a, a, A, A) {
    this->name = name;
    checkFigure();
};

void EquilateralTriangle::checkFigure() {
    status = setText();
    if (C != A || A != B || B != C )
        throw EquilateralTriangleException(status, Errors::EQUILATERAL_TRIANGLE_ANGLES_EQ);
    if ( A != 60)
        throw EquilateralTriangleException(status, Errors::EQUILATERAL_TRIANGLE_ANGLES_EQ_60);
    if (c != a || a != b || b != c)        
        throw EquilateralTriangleException(status, Errors::EQUILATERAL_TRIANGLE_SIDES_EQ);
    status = status + " создан";
};