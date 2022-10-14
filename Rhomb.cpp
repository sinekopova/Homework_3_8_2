#include "Rhomb.h"

Rhomb::Rhomb(std::string name, int a, int A, int B) 
    : Parallelogram(name, a, a, A, B) {
    this->name = name;
    checkFigure();
};


void Rhomb::checkFigure() {
    status = setText();
    if (!(a == b && b == c && c == d ))
        throw RhombException(status, Errors::RHOMB_SIDES_EQ);
    status = status + " создан";
};

