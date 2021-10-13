#ifndef __ToyPamphlet
#define __ToyPamphlet

#include<iostream>
#include "Toy2.h"

using std::ostream;

namespace example
{
	class ToyPamphlet
	{
		private:
			Toy2** list_of_toys;
			int max_number_of_toys;
			int number_of_toys;

		public:
			ToyPamphlet(int);
			~ToyPamphlet();
			void add_toy_to_pamphlet(Toy2& toy);
			void print_stored_pamphlet(string);
			void generate_pamphlet();
			void generate_pamphlet(ostream&);
			void generate_pamphlet_in_file(string);
	};
}

#endif
