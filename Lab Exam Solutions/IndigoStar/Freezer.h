#ifndef __Freezer
#define __Freezer

#include "CoolingUnit.h"

namespace example
{
	class Freezer : private CoolingUnit
	{
		public:
			Freezer();
			void plug_in();
			void plug_out();
	};
}

#endif
