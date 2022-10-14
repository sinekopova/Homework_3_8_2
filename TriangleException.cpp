#include "TriangleException.h"

TriangleException::TriangleException(std::string status, Errors error)
	: FigureException(status, error) {
	this->status = status + " �� ��� ������. �������: ";
	switch (error)
	{
	case Errors::TRIANGLE_SIDES_3:
		this->status = this->status + "���������� ������ �� ����� 3)";
		break;
	case Errors::TRIANGLE_ANGLES_180:
		this->status = this->status + "����� ����� �� ����� 180)";
		break;
	default:
		break;
	}
};
