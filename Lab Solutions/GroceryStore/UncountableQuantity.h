#ifndef __UncountableQuantity
#define __UncountableQuantity

#include<string>
#include "Quantity.h"

using std::string;

namespace example
{
	class UncountableQuantity : public Quantity
	{
		private:
			float amount_of_item;
			string unit;
			float rate_per_unit;

		public:
			UncountableQuantity(float, string, float);
			string get_quantity_str();
			string get_rate_str();
			float get_total();
	};
}

#endif
