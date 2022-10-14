#pragma once
#include <string>

class Figure {
public:
    Figure();
    Figure(std::string name);
    virtual std::string getStatus();
    std::string getName();

protected:
    std::string name;
    std::string status;
    int sidesCount;

    int getSidesCount();
    virtual void checkFigure();
    virtual std::string getSides();
    virtual std::string getAngles();
    virtual std::string setText();
};