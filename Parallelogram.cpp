#include "Parallelogram.h"

Parallelogram::Parallelogram(std::string name, int a, int b, int A, int B) 
    : Quadrangle(name, a, b, a, b, A, B, A, B) {
    this->name = name;
    checkFigure();
};

void Parallelogram::checkFigure() {
    status = setText();
    if (!(A == C && B == D))
        throw ParallelogramException(status, Errors::PARALLELOGRAM_ANGLE_PAIR_EQ);
    if (!(a == c && b == d))
        throw ParallelogramException(status, Errors::PARALLELOGRAM_SIDES_PAIR_EQ);
    status = status + " создан";
};

