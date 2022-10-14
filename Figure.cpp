#include "Figure.h"
#include "FigureException.h"

Figure::Figure() : Figure("������"){
};

Figure::Figure(std::string name) {
    this->name = name;
    sidesCount = 0;    
    checkFigure();
};

std::string Figure::getSides() {
    return "";
};

std::string Figure::getAngles() {
    return "";
};

std::string Figure::getName() {
    return name;
};

void Figure::checkFigure() {
    status = setText();
    if (sidesCount != 0)
        throw FigureException(status, Errors::FIGURE_SIDES_0);
    status = status + " ������";
};

int Figure::getSidesCount() {
    return sidesCount;
};

std::string Figure::setText() {
    return getName() + "(������� " + getSides() + ")";
};

std::string Figure::getStatus() {
    return status;
};



