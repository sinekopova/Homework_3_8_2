#include "Triangle.h"

Triangle::Triangle(int a, int b, int c, int A, int B, int C) 
    : Triangle("Треугольник",a,b,c,A,B,C) {
};

Triangle::Triangle(std::string name, int a, int b, int c, int A, int B, int C) {
    this->name = name;
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = C;
    sidesCount = 3;

    checkFigure();
};

std::string Triangle::getSides() {
    return "a = " + std::to_string(a) + ", b = " + std::to_string(b) + ", c = " + std::to_string(c);
};

std::string Triangle::getAngles() {
    return "A = " + std::to_string(A) + ", B = " + std::to_string(B) + ", C = " + std::to_string(C);
};

void Triangle::checkFigure() {
    status = setText();
    if (sidesCount != 3)
        throw TriangleException(status, Errors::TRIANGLE_SIDES_3);
    if ((A + B + C) != 180)
        throw TriangleException(status, Errors::TRIANGLE_ANGLES_180);
    status = status + " создан";
};

std::string Triangle::setText(){
    return getName() + "(стороны " + getSides() + ", углы " + getAngles() + ")";
};