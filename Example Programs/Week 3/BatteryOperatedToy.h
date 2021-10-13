#ifndef __BatteryOperatedToy
#define __BatteryOperatedToy

#include<string>
#include "Toy2.h"
#include "BatteryOperatedToyMaintenance.h"

using std::string;

namespace example
{
	class BatteryOperatedToy : public Toy2
	{
		friend void repair_toy(BatteryOperatedToy);

		private:
			string battery_type;
			int number_of_batteries;
			bool batteries_installed;
			bool in_use;

		protected:
			virtual bool is_ready_for_playing();
			bool is_being_played_with();

		public:
			BatteryOperatedToy(string, int, string, int);
			BatteryOperatedToy(BatteryOperatedToy&);
			void start_playing();
			void stop_playing();
			void put_batteries(string, int);
			void take_out_all_batteries();
	};
}

#endif
