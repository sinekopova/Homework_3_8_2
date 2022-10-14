#include "ParallelogramException.h"

ParallelogramException::ParallelogramException(std::string status, Errors error) 
	: QuadrangleException(status, error){
	this->status = status + " �� ��� ������. �������: ";
	switch (error)
	{
	case Errors::PARALLELOGRAM_ANGLE_PAIR_EQ:
		this->status = this->status + "����� ������� �� �����)";
		break;
	case Errors::PARALLELOGRAM_SIDES_PAIR_EQ:
		this->status = this->status + "������� ������� �� �����)";
		break;
	default:
		break;
	}
}
