#include "FigureException.h"

FigureException::FigureException(std::string status, Errors error) {
	this->status = status + " �� ��� ������. �������: ";
	switch (error)
	{
	case Errors::FIGURE_SIDES_0:
		this->status = this->status + "���������� ������ �� ����� 0)";
		break;
	default:
		break;
	}
};

const char* FigureException::what() const{
	return status.c_str();
};