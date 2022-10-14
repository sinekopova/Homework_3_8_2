#include "TriangleException.h"

TriangleException::TriangleException(std::string status, Errors error)
	: FigureException(status, error) {
	this->status = status + " не был создан. Причина: ";
	switch (error)
	{
	case Errors::TRIANGLE_SIDES_3:
		this->status = this->status + "количество сторон не равно 3)";
		break;
	case Errors::TRIANGLE_ANGLES_180:
		this->status = this->status + "сумма углов не равна 180)";
		break;
	default:
		break;
	}
};
