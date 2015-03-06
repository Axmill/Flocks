#include <iostream>
#include "Flock.hpp"

using namespace std;

int main()
{
	Flock<int> fl(1, 2, 3);
	cout << fl.checkFlock(fl) << endl;
	cout << fl.expand() << endl;
	return 0;
}