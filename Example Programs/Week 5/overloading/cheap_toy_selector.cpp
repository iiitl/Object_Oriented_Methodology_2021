#include "cheap_toy_selector.h"
#include "Toy3.h"

namespace example
{
	Toy3& operator <(Toy3& first_toy, Toy3& second_toy)
	{
		return first_toy.get_price() <= second_toy.get_price() ?
			first_toy : second_toy;
	}
}
