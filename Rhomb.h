#pragma once

#include "Parallelogram.h"
#include "RhombException.h"

class Rhomb : public Parallelogram {
public:
    Rhomb(std::string, int a, int A, int B);
protected:
    void checkFigure() override;
};

