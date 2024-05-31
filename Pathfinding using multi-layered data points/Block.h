#pragma once

#include "MultiLayeredDataPoint.h"
#include <vector>
#include <memory>

class Block
{
	/*
	Storage of Multi-layeredDataPoints
	single object in game singlton pattern implamate
	two main 
	1. function GetCuurentDataPoint For inside search
	2. Best Find datapoint for pathfinding 
	*/ 
	using ArrayPtr = std::vector<std::unique_ptr<MultiLayeredDataPoint>>;
private :
	ArrayPtr DataPoints;
public :

	MultiLayeredDataPoint& GetCurrentDataPoint() {
		return *DataPoints[0];
	}
	
	ArrayPtr FindsAllDataPointNetwork() {
		ArrayPtr DP;
		return DP;
	}
	
	
};

