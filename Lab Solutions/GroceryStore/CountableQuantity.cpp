#include<string>
#include<sstream>
#include<iomanip>
#include "CountableQuantity.h"

using std::string;
using std::to_string;
using std::fixed;
using std::ostringstream;

namespace example
{
	CountableQuantity::CountableQuantity(int number_of_items, float rate_per_item)
	{
		this->number_of_items = number_of_items;
		this->rate_per_item = rate_per_item;
	}

	string CountableQuantity::get_quantity_str()
	{
		return to_string(number_of_items);
	}

	string CountableQuantity::get_rate_str()
	{
		ostringstream out;
		out.precision(2);
		out<<"Rs "<<fixed<<rate_per_item;
		return out.str();
	}

	float CountableQuantity::get_total()
	{
		return number_of_items*rate_per_item;
	}
}
