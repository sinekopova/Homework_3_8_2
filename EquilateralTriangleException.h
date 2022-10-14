#pragma once

#include "IsoscelesTriangleException.h"

class EquilateralTriangleException : public IsoscelesTriangleException
{
public:
	EquilateralTriangleException(std::string status, Errors error);
};