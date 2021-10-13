#include<string>
#include<sstream>
#include<iomanip>
#include "UncountableQuantity.h"

using std::string;
using std::to_string;
using std::fixed;
using std::ostringstream;

namespace example
{
	UncountableQuantity::UncountableQuantity(float amount_of_item, string unit, float rate_per_unit)
	{
		this->amount_of_item = amount_of_item;
		this->unit = unit;
		this->rate_per_unit = rate_per_unit;
	}

	string UncountableQuantity::get_quantity_str()
	{
		ostringstream out;
		out.precision(2);
		out<<fixed<<amount_of_item<<" "<<unit;
		return out.str();
	}

	string UncountableQuantity::get_rate_str()
	{
		ostringstream out;
		out.precision(2);
		out<<"Rs "<<fixed<<rate_per_unit<<"/"<<unit;
		return out.str();
	}

	float UncountableQuantity::get_total()
	{
		return amount_of_item*rate_per_unit;
	}
}
