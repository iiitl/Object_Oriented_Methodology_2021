#ifndef __CoolingUnit
#define __CoolingUnit

#include "Compressor.h"
#define MINIMUM_ACHIEVABLE_TEMPERATURE -5.5
#define DEFAULT_ROOM_TEMPERATURE 25

namespace example
{
	class CoolingUnit
	{
		private:
			Compressor compressor;
			float current_temperature;
			float required_temperature;
		public:
			CoolingUnit(float);
			void set_required_temperature(float);
			void set_current_temperature(float);
			void cool_if_required();
	};
}

#endif
