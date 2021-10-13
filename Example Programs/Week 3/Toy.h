#ifndef __Toy
#define __TOy

#include<string>

using std::string;

namespace example
{
	class Toy
	{
		private:
			string name;
			int price;
			int id;

			static int counter;

		public:
			Toy(string, int);
			~Toy();
			void start_playing();
			void stop_playing();
			string get_name();
			void set_price(int);
			int get_price();
			int get_id();
	};
}
#endif
