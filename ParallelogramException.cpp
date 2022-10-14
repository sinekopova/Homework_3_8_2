#include "ParallelogramException.h"

ParallelogramException::ParallelogramException(std::string status, Errors error) 
	: QuadrangleException(status, error){
	this->status = status + " не был создан. Причина: ";
	switch (error)
	{
	case Errors::PARALLELOGRAM_ANGLE_PAIR_EQ:
		this->status = this->status + "уголы попарно не равны)";
		break;
	case Errors::PARALLELOGRAM_SIDES_PAIR_EQ:
		this->status = this->status + "стороны попарно не равны)";
		break;
	default:
		break;
	}
}
