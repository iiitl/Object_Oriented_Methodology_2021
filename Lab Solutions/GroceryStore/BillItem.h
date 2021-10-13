#ifndef __BillItem
#define __BillItem

#include<string>
#include "Quantity.h"

using std::string;

namespace example
{
	class BillItem
	{
		private:
			string item_code;
			Quantity* product_quantity;
			BillItem* next;

		public:
			BillItem(string, float, string, float);
			BillItem(string, int, float);
			~BillItem();
			float get_item_price();
			string get_item_representation();
			BillItem* get_next_item();
			void set_next_item(BillItem*);
	};
}
#endif
