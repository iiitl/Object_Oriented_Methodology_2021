#include<iostream>
#include "Compressor.h"
#include "CoolingUnit.h"

using std::cout;
using std::endl;

namespace example
{
	CoolingUnit::CoolingUnit(float compressor_capacity) : compressor(compressor_capacity)
	{
		current_temperature = DEFAULT_ROOM_TEMPERATURE;
		required_temperature = MINIMUM_ACHIEVABLE_TEMPERATURE;
	}

	void CoolingUnit::set_required_temperature(float required_temperature)
	{
		this->required_temperature = required_temperature;
	}

	void CoolingUnit::set_current_temperature(float current_temperature)
	{
		this->current_temperature = current_temperature;
	}

	void CoolingUnit::cool_if_required()
	{
		if(current_temperature > MINIMUM_ACHIEVABLE_TEMPERATURE && 
				current_temperature > required_temperature)
		{
			cout<<"We need to cool things down.."<<endl;
			compressor.switch_on();
			cout<<"Cooling... done !!"<<endl;
			compressor.switch_off();
			current_temperature = required_temperature > MINIMUM_ACHIEVABLE_TEMPERATURE?
						required_temperature : MINIMUM_ACHIEVABLE_TEMPERATURE;
		}
	}
}
