#include "EquilateralTriangleException.h"

EquilateralTriangleException::EquilateralTriangleException(std::string status, Errors error) 
	: IsoscelesTriangleException(status, error) {
	this->status = status + " �� ��� ������. �������: ";
	switch (error)
	{
	case Errors::EQUILATERAL_TRIANGLE_ANGLES_EQ:
		this->status = this->status + "����� � � � � � �� �����)";
		break;
	case Errors::EQUILATERAL_TRIANGLE_ANGLES_EQ_60:
		this->status = this->status + "����� �� ����� 60)";
		break;	
	case Errors::ISOSCELES_TRIANGLE_SIDES_EQ:
		this->status = this->status + "������� � � b � � �� �����)";
		break;
	default:
		break;
	}
}
