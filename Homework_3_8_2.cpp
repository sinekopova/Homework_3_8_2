#include "Figure.h"
#include "Triangle.h"
#include "Quadrangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Parallelogram.h"
#include "Rectangle.h"
#include "Rhomb.h"
#include "Square.h"
#include "Functions.h"

#include <iostream>
#include <string>


int main()
{

    setlocale(LC_ALL, "Russian");

    try  {
        Figure figure;
        printFigureInfo(&figure);
    }
    catch (const FigureException& ex)  {
        std::cout << ex.what() << std::endl;
    }

    try  {
        Triangle triangle(10, 20, 30, 50, 60, 70);
        printFigureInfo(&triangle);
    }
    catch (const FigureException& ex)  {
        std::cout << ex.what() << std::endl;
    }

    try {
        RightTriangle rightTriangle1("������������� �����������",10, 20, 30, 50, 60, 70);
        printFigureInfo(&rightTriangle1);
    }
    catch (const FigureException& ex)  {
        std::cout << ex.what() << std::endl;
    }

    try {
        RightTriangle rightTriangle2("������������� �����������", 10, 20, 30, 50, 40, 90);
        printFigureInfo(&rightTriangle2);
    }
    catch (const FigureException& ex)  {
        std::cout << ex.what() << std::endl;
    }

    try {
        IsoscelesTriangle isoscelesTriangle("�������������� �����������",10, 20, 50, 60);
        printFigureInfo(&isoscelesTriangle);
    }
    catch (const FigureException& ex)  {
        std::cout << ex.what() << std::endl;
    }

    try {
        IsoscelesTriangle isoscelesTriangle("�������������� �����������",10, 20, 50, 80);
        printFigureInfo(&isoscelesTriangle);
    }
    catch (const FigureException& ex)  {
        std::cout << ex.what() << std::endl;
    }

    try {
        EquilateralTriangle equilateralTriangle("�������������� �����������", 30, 70);
        printFigureInfo(&equilateralTriangle);
    }
    catch (const FigureException& ex) {
        std::cout << ex.what() << std::endl;
    }

    try {
        EquilateralTriangle equilateralTriangle("�������������� �����������", 30, 60);
        printFigureInfo(&equilateralTriangle);
    }
    catch (const FigureException& ex) {
        std::cout << ex.what() << std::endl;
    }

    try {
        Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
        printFigureInfo(&quadrangle);
    }
    catch (const FigureException& ex) {
        std::cout << ex.what() << std::endl;
    }

    try {
        Quadrangle quadrangle(10, 20, 30, 40, 100, 80, 100, 80);
        printFigureInfo(&quadrangle);
    }
    catch (const FigureException& ex) {
        std::cout << ex.what() << std::endl;
    }

    try   {
        Parallelogram parallelogram("�������������", 20, 30, 30, 40);
        printFigureInfo(&parallelogram);     
    }
    catch (const FigureException& ex) {
        std::cout << ex.what() << std::endl;
    }

    try   {
        Parallelogram parallelogram("�������������", 20, 30, 80, 100);
        printFigureInfo(&parallelogram);     
    }
    catch (const FigureException& ex) {
        std::cout << ex.what() << std::endl;
    }

    try  {
        Rectangle rectangle("�������������", 10, 20);
        printFigureInfo(&rectangle);
    }
    catch (const FigureException& ex) {
        std::cout << ex.what() << std::endl;
    }


    try  {
        Rhomb rhomb("����", 30, 30, 40);
        printFigureInfo(&rhomb);
    }
    catch (const FigureException& ex) {
        std::cout << ex.what() << std::endl;
    }


    try {
        Square square("�������", 20);
        printFigureInfo(&square);
    }
    catch (const FigureException& ex) {
        std::cout << ex.what() << std::endl;
    }


}