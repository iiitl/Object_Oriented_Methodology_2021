#ifndef __Quantity
#define __Quantity

#include<string>

using std::string;

namespace example
{
	// Quantity is an abstract class
	class Quantity
	{
		public:
			virtual string get_quantity_str() = 0;
			virtual string get_rate_str() = 0;
			virtual float get_total() = 0;
	};
}

#endif
