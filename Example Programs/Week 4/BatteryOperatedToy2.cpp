#include<iostream>
#include<string>
#include "BatteryOperatedToy2.h"
#include "Toy2.h"

using std::string;
using std::cout;
using std::endl;

namespace example
{
	BatteryOperatedToy2::BatteryOperatedToy2(string s, int i, 
			string s2, int i2) : Toy2(s, i)
	{
		battery_type = s2;
		number_of_batteries = i2;
		batteries_installed = in_use = false;
		cout<<"It is a battery-operated toy ";
		cout<<"with the requirement of "<<i2;
		cout<<" batteries of type "<<s2<<endl;
	}

	BatteryOperatedToy2::BatteryOperatedToy2(BatteryOperatedToy2& copy) 
			: Toy2(copy)
	{
		battery_type = copy.battery_type;
		number_of_batteries = copy.number_of_batteries;
		batteries_installed = copy.batteries_installed;
		in_use = copy.in_use;
		cout<<"This toy is a battery operated toy"<<endl;
	}

	void BatteryOperatedToy2::put_batteries(string s, int i)
	{
		if(batteries_installed)
			cout<<"The toy already has batteries, take them out first !!"<<endl;
		else if(battery_type != s)
			cout<<"This toy requires batteries of type "<<battery_type<<endl;
		else if(number_of_batteries != i)
			cout<<"The number of batteries requires is/are "<<number_of_batteries<<endl;
		else
		{
			cout<<"Batteries Installed !!"<<endl;
			batteries_installed = true;
		}
	}

	void BatteryOperatedToy2::take_out_all_batteries()
	{
		if(!batteries_installed)
			cout<<"This toy doesn't have any batteries installed right now !!"<<endl;
		else
		{
			batteries_installed = false;
			cout<<"Removed all the batteries from the toy !!"<<endl;
		}
	}

	bool BatteryOperatedToy2::is_ready_for_playing()
	{
		return batteries_installed;
	}

	void BatteryOperatedToy2::start_playing()
	{
		if(is_ready_for_playing())
		{
			cout<<"Switching on the toy..."<<endl;
			in_use = true;
		}
		else
			cout<<"This toy is not yet ready for playing"<<endl;
	}

	void BatteryOperatedToy2::stop_playing()
	{
		if(in_use)
		{
			in_use = false;
			cout<<"Switching off the toy..."<<endl;
		}
		else
			cout<<"This toy is not in use currently"<<endl;
	}

	bool BatteryOperatedToy2::is_being_played_with()
	{
		return in_use;
	}
}
