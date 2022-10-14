#include "RightTriangleException.h"

RightTriangleException::RightTriangleException(std::string status, Errors error)
	: TriangleException(status, error) {
	this->status = status + " не был создан. Причина: ";
	switch (error)
	{
	case Errors::RIGHT_TRIANGLE_ANGLE_90:
		this->status = this->status + "угол С не равен 90 градусов)";
		break;
	default:
		break;
	}
};
