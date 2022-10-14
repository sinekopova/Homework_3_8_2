#pragma once

#include "IsoscelesTriangle.h"
#include "EquilateralTriangleException.h"

class EquilateralTriangle : public IsoscelesTriangle {
public:
    EquilateralTriangle(std::string name, int a, int A);
protected:
    void checkFigure() override;
};