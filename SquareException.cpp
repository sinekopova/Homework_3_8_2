#include "SquareException.h"

SquareException::SquareException(std::string status, Errors error)
	: RhombException(status, error) {
	this->status = status + " не был создан. Причина: ";
	switch (error)
	{
	case Errors::SQUARE_ANGLES_90:
		this->status = this->status + "углы не равны 90)";
		break;
	default:
		break;
	}
};
