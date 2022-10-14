#pragma once

#include <string>

#include "Figure.h"
#include "TriangleException.h"

class Triangle : public Figure {
public:
    Triangle(int a, int b, int c, int A, int B, int C);
    Triangle(std::string name, int a, int b, int c, int A, int B, int C);    
    std::string getSides() override;
    std::string getAngles() override;
protected:
    std::string setText() override;
    void checkFigure() override;
    int A, B, C;
    int a, b, c;
};