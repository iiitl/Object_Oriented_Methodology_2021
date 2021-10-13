#include<iostream>
#include "Toy2.h"
#include "BatteryOperatedToy2.h"
#include "FlyingToy.h"
#include "PlaneToy.h"

using std::cout;
using std::endl;
using example::Toy2;
using example::BatteryOperatedToy2;
using example::FlyingToy;
using example::PlaneToy;

void put_toy_on_sale(Toy2* toy)
{
	cout<<"Putting "<<toy->get_name()<<" for sale(Id: "<<toy->get_id()<<"), ";
	cout<<"for the price of Rs "<<toy->get_price()<<endl;
}

int main()
{
	Toy2 *toy_ptr;
	Toy2 blocks("Blocks", 399);
	toy_ptr = &blocks;
	put_toy_on_sale(toy_ptr);

	BatteryOperatedToy2 piano("Kids' Piano", 399, "AA", 3);
	toy_ptr = &piano;
	put_toy_on_sale(toy_ptr);

	FlyingToy frisby("Frisby", 299, 0);
	toy_ptr = &frisby;
	put_toy_on_sale(toy_ptr);

	PlaneToy plane("Aeroplane", 999, "AA", 3, "Airbus A380");
	toy_ptr = &plane;
	put_toy_on_sale(toy_ptr);
}
