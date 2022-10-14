#include "Quadrangle.h"

Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D)
    : Quadrangle("Четырехугольник", a, b, c, d, A, B, C, D) {
};

Quadrangle::Quadrangle(std::string name, int a, int b, int c, int d, int A, int B, int C, int D) {
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;
    this->name = name;
    sidesCount = 4;
    checkFigure();
};

std::string Quadrangle::getSides() {
    return "a = " + std::to_string(a) + ", b = " + std::to_string(b) + ", c = " + std::to_string(c) + ", d = " + std::to_string(d);
};

std::string Quadrangle::getAngles() {
    return "A = " + std::to_string(A) + ", B = " + std::to_string(B) + ", C = " + std::to_string(C) + ", D = " + std::to_string(D);
};

void Quadrangle::checkFigure() {
    status = setText();
    if (sidesCount != 4) {
        throw QuadrangleException(status, Errors::QUADRANGLE_SIDES_4);
    }
    if (a == 0 || b == 0 || c == 0 || d == 0) {
        throw QuadrangleException(status, Errors::QUADRANGLE_SIDE_0);;
    }
    if (A + B + C + D != 360) {
        throw QuadrangleException(status, Errors::QUADRANGLE_ANGLES_360);;
    }
    status = status + " создан";
};

std::string Quadrangle::setText() {
    return getName() + "(стороны " + getSides() + ", углы " + getAngles() + ")";
};

