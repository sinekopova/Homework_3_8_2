#include "IsoscelesTriangleException.h"

IsoscelesTriangleException::IsoscelesTriangleException(std::string status, Errors error) 
	: TriangleException(status, error) {
	this->status = status + " не был создан. Причина: ";
	switch (error)
	{
	case Errors::ISOSCELES_TRIANGLE_ANGLES_EQ:
		this->status = this->status + "уголы А и С не равны)";
		break;
	case Errors::ISOSCELES_TRIANGLE_SIDES_EQ:
		this->status = this->status + "стороны а и b не равны)";
		break;	
	default:
		break;
	}
}
