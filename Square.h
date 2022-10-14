#pragma once

#include "Rhomb.h"
#include "SquareException.h"

class Square : public Rhomb {
public:
    Square(std::string name, int a);
protected:
    void checkFigure() override;
};

