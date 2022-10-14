#include "RightTriangle.h"

RightTriangle::RightTriangle(std::string name, int a, int b, int c, int A, int B, int C ) 
    : Triangle(name, a, b, c, A, B, C) {
    this->name = name;
    checkFigure();
};

void RightTriangle::checkFigure() {
    status = setText();
    if (C != 90)
        throw RightTriangleException(status, Errors::RIGHT_TRIANGLE_ANGLE_90);
    status = status + " создан";
};
