#pragma once

#include "QuadrangleException.h"

class ParallelogramException : public QuadrangleException{
public:
	ParallelogramException(std::string status, Errors error);
};


