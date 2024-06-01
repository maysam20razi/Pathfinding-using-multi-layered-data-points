#pragma once

#include "MultiLayeredDataPoint.h"
#include "SmartMultiLayeredDataPoint.h"
/*
data point types
*/
namespace DataPoints {
	enum class TypeDataPoint
	{
		DataPoint,
		SmartDataPoint
	};


	MultiLayeredDataPoint SelectorDataPoint(TypeDataPoint type) {
		switch (type)
		{
		case TypeDataPoint::DataPoint:
			MultiLayeredDataPoint DataPoint;
			return DataPoint;

		case TypeDataPoint::SmartDataPoint:
			SmartMultiLayeredDataPoint smartDataPoint;
			return smartDataPoint;
		}

	}
}