#pragma once

#include "FigureException.h"

class TriangleException : public FigureException{
public:
	TriangleException(std::string status, Errors error);
};

