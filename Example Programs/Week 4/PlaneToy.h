#ifndef __PlaneToy
#define __PlaneToy

#include<string>
#include "BatteryOperatedToy2.h"
#include "FlyingToy.h"

using std::string;

namespace example
{
	class PlaneToy : public FlyingToy, public BatteryOperatedToy2 
	{
		private:
			string model_name;

		public:
			PlaneToy(string, int, string, int, string);
			string get_model_name();
			void start_playing();
			void stop_playing();
	};
}

#endif
