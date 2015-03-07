#include <iostream>
#include "FlockArray.hpp"

using namespace std;

int main()
{
	FlockArray<int> fla;
	Flock<int> fl(1, 2, 3);
	fla.insertValues(fl);
	bool isFlock = fla.checkFlock(0);
	if (isFlock == true)
	{
		cout << "true" << endl;
	}
	
	else
	{
		cout << "false" << endl;
	}
}