#ifndef __FlyingToy
#define __FlyingToy

#include<string>
#include "Toy2.h"

using std::string;

namespace example
{
	class FlyingToy : virtual public Toy2
	{
		private:
			bool number_of_wings;

		public:
			FlyingToy(string, int, int);
			void start_playing();
			void stop_playing();
			bool has_wings();
	};
}

#endif
