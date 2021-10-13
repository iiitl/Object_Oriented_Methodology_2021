#ifndef __CountableQuantity
#define __CountableQuantity

#include<string>
#include "Quantity.h"

using std::string;

namespace example
{
	class CountableQuantity : public Quantity
	{
		private:
			int number_of_items;
			float rate_per_item;

		public:
			CountableQuantity(int, float);
			string get_quantity_str();
			string get_rate_str();
			float get_total();
	};
}

#endif
