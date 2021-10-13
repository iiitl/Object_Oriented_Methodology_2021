#ifndef __ToyDemonstrator
#define __ToyDemonstrator

#include "../Toy2.h"
#include "../BatteryOperatedToy2.h"

namespace example
{
	class ToyDemonstrator
	{
		public:
			void show_demo(Toy2&);
			void show_demo(BatteryOperatedToy2&, string, int);
	};
}

#endif
