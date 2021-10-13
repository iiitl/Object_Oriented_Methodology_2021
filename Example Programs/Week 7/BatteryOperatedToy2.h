#ifndef __BatteryOperatedToy2
#define __BatteryOperatedToy2

#include<string>
#include "Toy2.h"
#include "BatteryOperatedToyMaintenance2.h"

using std::string;

namespace example
{
	class BatteryOperatedToy2 : virtual public Toy2
	{
		friend void repair_toy2(BatteryOperatedToy2);

		private:
			string battery_type;
			int number_of_batteries;
			bool batteries_installed;
			bool in_use;

		protected:
			virtual bool is_ready_for_playing();
			bool is_being_played_with();

		public:
			BatteryOperatedToy2(string, int, string, int);
			BatteryOperatedToy2(BatteryOperatedToy2&);
			void start_playing();
			void stop_playing();
			void put_batteries(string, int);
			void take_out_all_batteries();
	};
}

#endif
