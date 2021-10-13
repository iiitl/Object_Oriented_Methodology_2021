#include<iostream>
#include "AirConditioner.h"

using std::cout;
using std::endl;
using example::AirConditioner;

int main()
{
	AirConditioner ac;
	cout<<"Setting required temperature to 20 ..."<<endl;
	ac.set_required_temperature(20);
	cout<<"Setting current temperature to 40 !!"<<endl;
	ac.set_current_temperature(40);
	cout<<"Yay !!"<<endl;
	return 0;
}
