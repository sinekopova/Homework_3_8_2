#include "Square.h"

Square::Square(std::string name, int a) 
    : Rhomb(name, a, 90, 90) {
    this->name = name;
    checkFigure();
};

void Square::checkFigure() {
    status = setText();
    if (!(A == 90 && B == 90))
        throw SquareException(status, Errors::SQUARE_ANGLES_90);
    status = status + " создан";
};

