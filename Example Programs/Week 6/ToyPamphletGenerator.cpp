#include<iostream>
#include "Toy2.h"
#include "ToyPamphlet.h"

using example::ToyPamphlet;
using example::Toy2;
using std::cout;
using std::endl;

int main()
{
	ToyPamphlet pamphlet(4);
	Toy2 blocks("Blocks", 399);
	pamphlet.add_toy_to_pamphlet(blocks);
	Toy2 piano("Kids' Piano", 399);
	pamphlet.add_toy_to_pamphlet(piano);
	Toy2 frisby("Frisby", 299);
	pamphlet.add_toy_to_pamphlet(frisby);
	Toy2 plane("Aeroplane", 999);
	pamphlet.add_toy_to_pamphlet(plane);
	pamphlet.generate_pamphlet_in_file("pamphlet.txt");
	cout<<"Pamphlet generated. Stored in \"pamphlet.txt\"."<<endl;
	cout<<"The Pamphlet looks like this:"<<endl<<endl;
	pamphlet.print_stored_pamphlet("pamphlet.txt");

	return 0;
}
