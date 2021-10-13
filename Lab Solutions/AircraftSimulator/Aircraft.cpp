#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include "Aircraft.h"

using std::string;
using std::cout;
using std::cerr;
using std::endl;

namespace example
{
	Aircraft::Aircraft(int number_of_engines, Aircraft::AircraftSize cabin_size)
	{
		this->number_of_engines = number_of_engines;
		engine_status = new bool[number_of_engines](); // Initialises all elements to false
		if(engine_status == NULL)
		{
			cerr<<"Could not simulate the engines... aborting..."<<endl;
			exit(1);
		}
		this->cabin_size = cabin_size;
		srand(time(0));
	}

	Aircraft::~Aircraft()
	{
		if(engine_status != NULL)
			delete[] engine_status;
	}

	void Aircraft::switch_on_engine()
	{
		int ctr = 0;
		while(engine_status[ctr] && ctr < number_of_engines)
			ctr++;
		if(ctr == number_of_engines)
			cout<<"All engines are already on..."<<endl;
		else
		{
			cout<<"Switching on Engine#"<<(ctr+1)<<endl;
			engine_status[ctr] = true;
		}
	}

	void Aircraft::switch_off_engine()
	{
		int ctr = number_of_engines-1;
		while(!engine_status[ctr] && ctr >= 0)
			ctr--;
		if(ctr < 0)
			cout<<"All engines are already off..."<<endl;
		else
		{
			cout<<"Switching off Engine#"<<(ctr+1)<<endl;
			engine_status[ctr] = false;
		}
	}

	bool Aircraft::is_acceptable_load(int load)
	{
		if(load > (int)cabin_size)
			return false;
		else
			return true;
	}

	bool Aircraft::check_common_parts()
	{
		double random = (double)rand() / (RAND_MAX + 1.0); // Produces a double in [0,1)
		int random_int = (int)100*random; // Produces an integer in [0,100)
		if(random_int >= 98)
			return false;
		else
			return true;
	}
}
