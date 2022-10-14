#include "RectangleException.h"

RectangleException::RectangleException(std::string status, Errors error) 
	: ParallelogramException(status, error) {
	this->status = status + " �� ��� ������. �������: ";
	switch (error)
	{
	case Errors::RECTANGLE_ANGLE_90:
		this->status = this->status + "����� �� ����� 90)";
		break;
	default:
		break;
	}
}
