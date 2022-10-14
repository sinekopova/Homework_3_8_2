#pragma once

#include <string>

#include "Figure.h"
#include "QuadrangleException.h"

class Quadrangle : public Figure {
public:
    Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D);
    Quadrangle(std::string name, int a, int b, int c, int d, int A, int B, int C, int D);
    std::string getSides() override;
    std::string getAngles() override;
protected:
    std::string setText() override;
    void checkFigure() override;    
    int A, B, C, D;
    int a, b, c, d;
};
