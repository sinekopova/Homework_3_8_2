#pragma once

#include "TriangleException.h"

class IsoscelesTriangleException : public TriangleException{
public:
	IsoscelesTriangleException(std::string status, Errors error);
};