#include "Block.h"

ArrayPtr Block::FindsAllDataPointNetwork()
{
	ArrayPtr DP;
	return DP;
}

void Block::GenerateMultiLayeredDataPoints(DataPoints::TypeDataPoint type)
{
	MultiLayeredDataPoint dataPoint = DataPoints::SelectorDataPoint(type);
	AddToStorageDataPoint(dataPoint);
}

void Block::AddToStorageDataPoint(MultiLayeredDataPoint& dataPoint)
{
	DataPoints.push_back(std::make_unique<MultiLayeredDataPoint>(dataPoint));
}
