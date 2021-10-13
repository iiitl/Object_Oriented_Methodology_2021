#include<iostream>
#include "CoolingUnit.h"
#include "Freezer.h"

using std::cout;
using std::endl;

namespace example
{
	Freezer::Freezer() : CoolingUnit(LARGE)
	{
		cout<<"Freezer installed"<<endl;
	}

	void Freezer::plug_in()
	{
		cout<<"Plugging in the freezer..."<<endl;
		cool_if_required();
	}

	void Freezer::plug_out()
	{
		cout<<"Plugging out the freezer..."<<endl;
		set_current_temperature(DEFAULT_ROOM_TEMPERATURE);
	}
}
