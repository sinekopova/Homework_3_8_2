#pragma once

#include "FigureException.h"

class QuadrangleException : public FigureException{
public:
	QuadrangleException(std::string status, Errors error);
};

