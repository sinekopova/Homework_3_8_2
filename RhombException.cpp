#include "RhombException.h"

RhombException::RhombException(std::string status, Errors error)
	: ParallelogramException(status, error) {
	this->status = status + " �� ��� ������. �������: ";
	switch (error)
	{
	case Errors::RHOMB_SIDES_EQ:
		this->status = this->status + "������� �� �����)";
		break;
	default:
		break;
	}
};
