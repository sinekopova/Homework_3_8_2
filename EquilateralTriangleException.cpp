#include "EquilateralTriangleException.h"

EquilateralTriangleException::EquilateralTriangleException(std::string status, Errors error) 
	: IsoscelesTriangleException(status, error) {
	this->status = status + " не был создан. Причина: ";
	switch (error)
	{
	case Errors::EQUILATERAL_TRIANGLE_ANGLES_EQ:
		this->status = this->status + "уголы А и В и С не равны)";
		break;
	case Errors::EQUILATERAL_TRIANGLE_ANGLES_EQ_60:
		this->status = this->status + "уголы не равны 60)";
		break;	
	case Errors::ISOSCELES_TRIANGLE_SIDES_EQ:
		this->status = this->status + "стороны а и b и с не равны)";
		break;
	default:
		break;
	}
}
