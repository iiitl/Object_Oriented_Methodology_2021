#ifndef __AirConditioner
#define __AirConditioner

#include "CoolingUnit.h"

namespace example
{
	class AirConditioner : private CoolingUnit
	{
		public:
			AirConditioner();
			void set_required_temperature(int);
			void set_current_temperature(int);
	};
}

#endif
