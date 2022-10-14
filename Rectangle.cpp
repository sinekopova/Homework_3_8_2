#include "Rectangle.h"


Rectangle::Rectangle(std::string name, int a, int b) 
    : Parallelogram(name, a, b, 90, 90) {
    this->name = name;
    checkFigure();
};


void Rectangle::checkFigure() {
    status = setText();
    if (D != 90)
        throw RectangleException(status, Errors::RECTANGLE_ANGLE_90);
    status = status + " создан";
};

