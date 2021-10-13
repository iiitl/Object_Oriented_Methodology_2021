#include<iostream>
#include "Freezer.h"

using std::cout;
using std::endl;
using example::Freezer;

int main()
{
	Freezer f;
	f.plug_in();
	f.plug_out();
	f.plug_in();
	return 0;
}
