#include<iostream>
#include<string>
#include "Toy2.h"
#include "BatteryOperatedToy2.h"
#include "ToyDemonstrator2.h"

using std::cout;
using std::endl;
using example::Toy2;
using example::BatteryOperatedToy2;
using example::ToyDemonstrator2;

int main()
{
	Toy2 t1("Blocks", 399);
	Toy2 t2("Rings", 499);
	ToyDemonstrator2 td;
	cout<<"Showing demo for two toys"<<endl;
	td.show_multiple_demos(t1, t2);
	return 0;
}
