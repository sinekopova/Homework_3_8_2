#include "RightTriangleException.h"

RightTriangleException::RightTriangleException(std::string status, Errors error)
	: TriangleException(status, error) {
	this->status = status + " �� ��� ������. �������: ";
	switch (error)
	{
	case Errors::RIGHT_TRIANGLE_ANGLE_90:
		this->status = this->status + "���� � �� ����� 90 ��������)";
		break;
	default:
		break;
	}
};
