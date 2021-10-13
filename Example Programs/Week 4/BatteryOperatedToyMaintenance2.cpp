#include<iostream>
#include "BatteryOperatedToy2.h"

using std::cout;
using std::endl;

namespace example
{
	void repair_toy2(BatteryOperatedToy2 toy)
	{
		// Switch off the toy if it is on
		if(toy.in_use)
			toy.in_use = false;
		// Take out the batteries
		toy.batteries_installed = false;
		// Repairing...
		cout<<"Repairing "<<toy.get_name()<<" with id "<<toy.get_id()<<endl;
		// Done, put the batteries back
		toy.batteries_installed = true;
	}
}
