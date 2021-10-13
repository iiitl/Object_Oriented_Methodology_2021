#include<iostream>
#include "Aircraft.h"
#include "Z.h"

using std::cout;
using std::endl;

namespace example
{
	Z::Z() : Aircraft(4, Aircraft::AircraftSize::LARGE)
	{
		cout<<" *** Simulating an aircraft of type Z ***"<<endl;
	}
}
