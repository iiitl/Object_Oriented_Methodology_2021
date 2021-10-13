#include<iostream>
#include "AirConditioner.h"
#include "CoolingUnit.h"

using std::cout;
using std::endl;

namespace example
{
	AirConditioner::AirConditioner() : CoolingUnit(SMALL)
	{
		cout<<"Air Conditioner installed"<<endl;
	}

	void AirConditioner::set_required_temperature(int required_temperature)
	{
		CoolingUnit::set_required_temperature(required_temperature);
		cool_if_required();
	}

	void AirConditioner::set_current_temperature(int current_temperature)
	{
		CoolingUnit::set_current_temperature(current_temperature);
		cool_if_required();
	}

}
