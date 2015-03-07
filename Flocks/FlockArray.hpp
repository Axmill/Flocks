#pragma once
#include <vector>
#include "Flock.hpp"

template <typename Type>
class FlockArray
{
public:
	FlockArray();
	~FlockArray();

	void insertValues(Flock<Type> fl)
	{
		this->flockVector.push_back(fl);
	}
	
	void insertValues(Flock<Type> fl, Flock<Type> fl2, Flock<Type> fl3)
	{
		this->insertValues(fl, fl2);
		this->insertValues(fl3);
	}
	
	int getSize()
	{
		return this->flockVector.size();
	}

	bool checkFlock(int location)
	{
		bool condition = this->flockVector[location].checkFlock();
		return condition;
	}

protected:
	std::vector<Flock<Type>> flockVector;
};