#pragma once


#include "DistuributionMLDP.h"
#include "Vector.h"// vector math
#include <vector>
#include <memory>

class Block
{
	/*============================================================================
	Storage of  MLDP(Multi-layeredDataPoints)
	single object in game singlton pattern implamate
	two main 
	1. function GetCuurentDataPoint For inside search
	2. Best Find datapoint for pathfinding 
	============================================================================*/ 
	

	/*============================================================================
	DistuributionMLDP :
	Non-uniform and uniform distribution 
	generate non-uniform MLDP 
	============================================================================*/
	
private :
	DistuributionMLDP distributeMultiLayeredDataPoints;
	
private :
	MLDPPtrs FindsAllDataPointNetwork();
	
public :

	/*============================================================================
			API
	============================================================================*/

	std::vector<Vector3D> FindWay3D(Vector3D StartLocation, Vector3D EndLocation);
	std::vector<Vector2D> FindWay2D(Vector2D StartLocation, Vector2D EndLocation);

	template<typename T>
		bool DoesFindWay(T startLocation , T endLocation);
	void DistributeMultiLayeredDataPoints();

	

};

template<typename T>
inline bool Block::DoesFindWay(T startLocation, T endLocation)
{
	return false;
}
