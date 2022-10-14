#pragma once

#include "Triangle.h"
#include "IsoscelesTriangleException.h"

class IsoscelesTriangle : public Triangle {
public:
    IsoscelesTriangle(std::string name, int a, int c, int A, int B);
protected:
    void checkFigure() override;
};