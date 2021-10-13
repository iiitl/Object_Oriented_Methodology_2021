#include<iostream>
#include "Bill.h"

using example::Bill;
using std::cout;
using std::endl;

int main()
{
	Bill bill("9999999999");
	bill.add_item();
	bill.add_item();
	bill.print_bill();
}
