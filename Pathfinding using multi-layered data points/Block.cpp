#include "Block.h"


Block* Block::GetInstanceBlock() 
{
	if (blockPtr != nullptr)
		return blockPtr;
	
	else
	{
		blockPtr = new Block();
		return blockPtr;
	}
	
}

MLDPPtrs Block::FindsAllDataPointNetwork()
{
	return MLDPPtrs();
}

std::vector<Vector3D> Block::FindWay3D(Vector3D StartLocation, Vector3D EndLocation)
{
	return std::vector<Vector3D>();
}

std::vector<Vector2D> Block::FindWay2D(Vector2D StartLocation, Vector2D EndLocation)
{
	return std::vector<Vector2D>();
}

void Block::DistributeMultiLayeredDataPoints()
{
	
}