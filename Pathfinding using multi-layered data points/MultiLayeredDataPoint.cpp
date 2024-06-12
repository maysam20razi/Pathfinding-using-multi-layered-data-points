#include "MultiLayeredDataPoint.h"

OuterMLDP* MultiLayeredDataPoint::GetOuter() 
{
	return &outer;
}

InnerMLDP* MultiLayeredDataPoint::GetInner()
{
	return &inner;
}
