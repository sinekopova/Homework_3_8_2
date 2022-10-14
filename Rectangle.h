#pragma once

#include "Parallelogram.h"
#include "RectangleException.h"


class Rectangle : public Parallelogram {
public:
    Rectangle(std::string name, int a, int b);
protected:
    void checkFigure() override;
};