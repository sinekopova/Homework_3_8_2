#pragma once

#include "ParallelogramException.h"

class RectangleException : public ParallelogramException{
public:
	RectangleException(std::string status, Errors error);
};



