#ifndef __ToyValidator
#define __ToyValidator

#include "Toy2.h"

namespace example
{
	class ToyValidator
	{
		private:
			string message;

		protected:
			void check(string, int);

		public:
			Toy2* create_after_validation(string, int);
			string get_message();
	};
}

#endif
