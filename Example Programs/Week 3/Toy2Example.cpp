#include<iostream>
#include<string> // We don't need it, but still, for better reading...
#include "Toy2.h"

using std::string;
using example::Toy2;

void func(Toy2 t)
{
	t.start_playing();
	t.stop_playing();
}

int main()
{
	Toy2 t("Blocks", 399);
	func(t);
	return 0;
}
