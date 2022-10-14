#include "QuadrangleException.h"

QuadrangleException::QuadrangleException(std::string status, Errors error) 
	: FigureException(status, error) {
	this->status = status + " не был создан. Причина: ";
	switch (error)
	{
	case Errors::QUADRANGLE_SIDES_4:
		this->status = this->status + "количество сторон не равно 4)";
		break;
	case Errors::QUADRANGLE_ANGLES_360:
		this->status = this->status + "сумма углов не равна 360)";
		break;
	case Errors::QUADRANGLE_SIDE_0:
		this->status = this->status + "сторона равна 0)";
		break;
	default:
		break;
	}
}
