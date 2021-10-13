#include<iostream>
#include<string>
#include "../Toy2.h"
#include "../BatteryOperatedToy2.h"
#include "ToyDemonstrator.h"

using std::cout;
using std::endl;

namespace example
{
	void ToyDemonstrator::show_demo(Toy2& toy)
	{
		cout<<"Let's play with "<<toy.get_name()<<endl;
		toy.start_playing();
		cout<<"I guess it's enough :P"<<endl;
		toy.stop_playing();
	}

	void ToyDemonstrator::show_demo(BatteryOperatedToy2& toy, 
			string battery_type, int number_of_batteries)
	{
		cout<<"I need to put some batteries in it first !!"<<endl;
		toy.put_batteries(battery_type, number_of_batteries);
		show_demo(toy);
		cout<<"Let me take the batteries out..."<<endl;
		toy.take_out_all_batteries();
	}
}
