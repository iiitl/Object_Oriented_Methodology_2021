#include<iostream>
#include<string> // We don't need it, but still, for better reading...
#include "Toy.h"

using std::string;
using example::Toy;

void func()
{
	Toy t3 = Toy("Guitar", 349);
	t3.start_playing();
	t3.stop_playing();
}

int main()
{
	Toy t1 = Toy("Blocks", 399);
	Toy t2 = Toy("Rings", 499);
	func();
	return 0;
}
