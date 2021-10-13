#include<iostream>
#include<string.h>
#include "FlyingToy.h"
#include "BatteryOperatedToy2.h"
#include "PlaneToy.h"

using std::string;
using std::cout;
using std::endl;

namespace example
{
	PlaneToy::PlaneToy(string s1, int i1, string s2, int i2, string s3)
		: FlyingToy(s1, i1, 2), BatteryOperatedToy2(s1, i1, s2, i2), Toy2(s1, i1)
	{
		model_name = s3;
		cout<<"You are now looking at a plane toy of type "<<s3<<endl;
	}

	string PlaneToy::get_model_name()
	{
		return model_name;
	}

	void PlaneToy::start_playing()
	{
		cout<<"Let's play with a model plane of type "<<model_name<<endl;
		FlyingToy::start_playing();
		BatteryOperatedToy2::start_playing();
		Toy2::start_playing();
	}

	void PlaneToy::stop_playing()
	{
		FlyingToy::stop_playing();
		BatteryOperatedToy2::stop_playing();
		Toy2::stop_playing();
		cout<<"You don't like planes??"<<endl;
	}
}
