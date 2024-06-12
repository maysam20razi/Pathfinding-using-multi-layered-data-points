#pragma once
#include "Node.h";
#include "InnerMLDP.h"
#include "OuterMLDP.h"

class MultiLayeredDataPoint
{
public :
	OuterMLDP* GetOuter();
	InnerMLDP* GetInner();
private :
	//components for Multi-layered data points
	OuterMLDP outer;
	InnerMLDP inner;
};

