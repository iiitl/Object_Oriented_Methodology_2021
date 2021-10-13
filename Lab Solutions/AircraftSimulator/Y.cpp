#include<iostream>
#include "Aircraft.h"
#include "Y.h"

using std::cout;
using std::endl;

namespace example
{
	Y::Y() : Aircraft(4, Aircraft::AircraftSize::MEDIUM)
	{
		cout<<" *** Simulating an aircraft of type Y ***"<<endl;
	}
}
