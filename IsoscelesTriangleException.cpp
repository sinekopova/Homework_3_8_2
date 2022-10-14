#include "IsoscelesTriangleException.h"

IsoscelesTriangleException::IsoscelesTriangleException(std::string status, Errors error) 
	: TriangleException(status, error) {
	this->status = status + " �� ��� ������. �������: ";
	switch (error)
	{
	case Errors::ISOSCELES_TRIANGLE_ANGLES_EQ:
		this->status = this->status + "����� � � � �� �����)";
		break;
	case Errors::ISOSCELES_TRIANGLE_SIDES_EQ:
		this->status = this->status + "������� � � b �� �����)";
		break;	
	default:
		break;
	}
}
