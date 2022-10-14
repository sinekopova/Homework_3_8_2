#include "RhombException.h"

RhombException::RhombException(std::string status, Errors error)
	: ParallelogramException(status, error) {
	this->status = status + " не был создан. ѕричина: ";
	switch (error)
	{
	case Errors::RHOMB_SIDES_EQ:
		this->status = this->status + "стороны не равны)";
		break;
	default:
		break;
	}
};
