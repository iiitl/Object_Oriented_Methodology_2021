#ifndef __Toy3
#define __Toy3

#include<string>
#include "cheap_toy_selector.h"

using std::string;

namespace example
{
	// v3 of the class Toy
	class Toy3
	{
		private:
			string name;
			int price;
			int id;

			static int counter;

		public:
			Toy3(string, int);
			Toy3(Toy3&);
			virtual void start_playing();
			virtual void stop_playing();
			string get_name();
			void set_price(int);
			int get_price();
			int get_id();

			static void reset_counter();

			Toy3& operator > (Toy3&);
			friend Toy3& operator < (Toy3&, Toy3&);
	};
}

#endif
