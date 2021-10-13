#ifndef __derived
#define __derived

#include "base.h"

namespace example
{
	class derived : public base
	{
		public:
			void non_virtual_method();
			void virtual_method();
	};
}

#endif
