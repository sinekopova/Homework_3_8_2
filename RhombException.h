#pragma once

#include "ParallelogramException.h"

class RhombException : public ParallelogramException{
public:
	RhombException(std::string status, Errors error);
};


