#pragma once

#include "Quadrangle.h"
#include "ParallelogramException.h"

class Parallelogram : public Quadrangle {
public:
    Parallelogram(std::string name, int a, int b, int A, int B);
protected:
    void checkFigure() override;
};