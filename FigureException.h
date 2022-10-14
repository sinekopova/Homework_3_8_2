#pragma once

#include<string>

#include "Errors.h"

class FigureException : std::exception {
public:
	FigureException(std::string status, Errors error);
	virtual const char* what() const override;
protected:
	std::string status;
};
