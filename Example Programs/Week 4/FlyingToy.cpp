#include<iostream>
#include<string>
#include "FlyingToy.h"
#include "Toy2.h"

using std::string;
using std::cout;
using std::endl;

namespace example
{
	FlyingToy::FlyingToy(string s, int i1, int i2) 
			: Toy2(s, i1)
	{
		number_of_wings = i2;
		cout<<"It is a flying toy :-)"<<endl;
	}

	void FlyingToy::start_playing()
	{
		cout<<"Isn't it fun to see something fly like that?"<<endl;
	}

	void FlyingToy::stop_playing()
	{
		cout<<"Looks like you are feeling dizzy with all that \"flying\"!"<<endl;
	}

	bool FlyingToy::has_wings()
	{
		return number_of_wings > 0;
	}
}
