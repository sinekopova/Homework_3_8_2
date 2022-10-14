#pragma once

#include "TriangleException.h"

class RightTriangleException : public TriangleException{
public:
	RightTriangleException(std::string status, Errors error);
};


