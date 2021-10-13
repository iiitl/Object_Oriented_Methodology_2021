#ifndef __ToyDemonstrator2
#define __ToyDemonstrator2

#include "Toy2.h"
#include "BatteryOperatedToy2.h"

namespace example
{
	class ToyDemonstrator2
	{
		public:
			void show_demo(Toy2&);
			void show_demo(BatteryOperatedToy2&, string, int);
			void show_multiple_demos(Toy2&, Toy2&);
			static void* show_independent_demo(void*);
	};
}

#endif
