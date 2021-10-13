#include<iostream>
#include "Aircraft.h"
#include "X.h"

using std::cout;
using std::endl;

namespace example
{
	X::X() : Aircraft(2, Aircraft::AircraftSize::SMALL)
	{
		cout<<" *** Simulating an aircraft of type X ***"<<endl;
	}
}
