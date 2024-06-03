#pragma once
#include "MultiLayeredDataPoint.h"
#include "FactorySelectTypeDataPoint.h"
#include <vector>
#include <memory>

using MLDPPtrs = std::vector<std::unique_ptr<MultiLayeredDataPoint>>;

class DistuributionMLDP
{
private : 
	MLDPPtrs DataPoints;
public:
 void GenerateMultiLayeredDataPoints(DataPoints::TypeDataPoint type);

private:
private:
	void AddToStorageDataPoint(MultiLayeredDataPoint& dataPoint);
	
};

