#ifndef __Toy2
#define __Toy2

#include<string>

using std::string;

namespace example
{
	// v2 of the class Toy
	class Toy2
	{
		private:
			string name;
			int price;
			int id;

			static int counter;

		public:
			Toy2(string, int);
			Toy2(Toy2&);
			~Toy2();
			virtual void start_playing();
			virtual void stop_playing();
			string get_name();
			void set_price(int);
			int get_price();
			int get_id();

			static void reset_counter();
	};
}

#endif
