#include<iostream>
#include<string>
#include "BatteryOperatedToy.h"
#include "BatteryOperatedToyMaintenance.h"

using std::string;
using example::BatteryOperatedToy;

int main()
{
	BatteryOperatedToy bt("Kids' Piano", 399, "AA",3);
	bt.start_playing();
	bt.put_batteries("AAA", 3);
	bt.put_batteries("AA", 3);
	bt.start_playing();
	bt.stop_playing();
	repair_toy(bt);
}
