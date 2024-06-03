#include "DistuributionMLDP.h"

void DistuributionMLDP::GenerateMultiLayeredDataPoints(DataPoints::TypeDataPoint type)
{
	MultiLayeredDataPoint dataPoint = DataPoints::SelectorDataPoint(type);
	AddToStorageDataPoint(dataPoint);
}

void DistuributionMLDP::AddToStorageDataPoint(MultiLayeredDataPoint& dataPoint)
{
	DataPoints.push_back(std::make_unique<MultiLayeredDataPoint>(dataPoint));
}
