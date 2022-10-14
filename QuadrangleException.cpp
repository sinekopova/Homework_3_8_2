#include "QuadrangleException.h"

QuadrangleException::QuadrangleException(std::string status, Errors error) 
	: FigureException(status, error) {
	this->status = status + " �� ��� ������. �������: ";
	switch (error)
	{
	case Errors::QUADRANGLE_SIDES_4:
		this->status = this->status + "���������� ������ �� ����� 4)";
		break;
	case Errors::QUADRANGLE_ANGLES_360:
		this->status = this->status + "����� ����� �� ����� 360)";
		break;
	case Errors::QUADRANGLE_SIDE_0:
		this->status = this->status + "������� ����� 0)";
		break;
	default:
		break;
	}
}
