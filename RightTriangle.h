#pragma once

#include "Triangle.h"
#include "RightTriangleException.h"

class RightTriangle : public Triangle {
public:
    RightTriangle(std::string name, int a, int b, int c, int A, int B, int C);
protected:
    void checkFigure() override;
};