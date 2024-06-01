#pragma once

#include "FactorySelectTypeDataPoint.h"
#include "MultiLayeredDataPoint.h"
#include <vector>
#include <memory>
using ArrayPtr = std::vector<std::unique_ptr<MultiLayeredDataPoint>>;
class Block
{
	/*
	Storage of Multi-layeredDataPoints
	single object in game singlton pattern implamate
	two main 
	1. function GetCuurentDataPoint For inside search
	2. Best Find datapoint for pathfinding 
	*/ 
	
private :
	ArrayPtr DataPoints;
public :

	MultiLayeredDataPoint& GetCurrentDataPoint() {
		return *DataPoints[0];
	}
	
	ArrayPtr FindsAllDataPointNetwork();
	/*
	*/
	void GenerateMultiLayeredDataPoints(DataPoints::TypeDataPoint type);

private :
	void AddToStorageDataPoint(MultiLayeredDataPoint& dataPoint);
};

