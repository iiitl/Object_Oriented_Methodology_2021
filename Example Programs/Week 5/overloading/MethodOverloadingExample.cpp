#include<iostream>
#include<string>
#include "../Toy2.h"
#include "../BatteryOperatedToy2.h"
#include "ToyDemonstrator.h"

using std::cout;
using std::endl;
using example::Toy2;
using example::BatteryOperatedToy2;
using example::ToyDemonstrator;

int main()
{
	Toy2 t("Blocks", 399);
	BatteryOperatedToy2 bt("Kids' Piano", 399, "AA", 3);
	ToyDemonstrator td;
	cout<<"Showing demo for "<<t.get_name()<<endl;
	td.show_demo(t);
	cout<<endl;
	cout<<"Showing demo for "<<bt.get_name()<<endl;
	td.show_demo(bt, "AA", 3);
}
