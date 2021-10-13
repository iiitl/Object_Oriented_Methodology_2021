#ifndef __Aircraft
#define __Aircraft

namespace example
{
	class Aircraft
	{
		public:
			enum class AircraftSize{SMALL=20, MEDIUM=100, LARGE=300};
		private:
			int number_of_engines;
			bool* engine_status;
			AircraftSize cabin_size;
		public:
			Aircraft(int, AircraftSize);
			~Aircraft();
			void switch_on_engine();
			void switch_off_engine();
			bool is_acceptable_load(int);
			bool check_common_parts();
	};
}

#endif
