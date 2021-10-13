#include<iostream>
#include "PlaneToy.h"

using example::PlaneToy;

int main()
{
	PlaneToy pt("Aeroplane", 999, "AA", 3, "Airbus A380");
	pt.put_batteries("AA", 3);
	pt.start_playing();
	pt.stop_playing();
}
