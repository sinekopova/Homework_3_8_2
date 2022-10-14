#pragma once

#include "RhombException.h"

class SquareException : public RhombException{
public:
	SquareException(std::string status, Errors error);
};



