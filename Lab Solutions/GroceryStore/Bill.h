#ifndef __Bill
#define __Bill

#include<string>
#include "BillItem.h"
#include "ProductDirectory.h"

using std::string;

namespace example
{
	class Bill
	{
		private:
			string mobile_number;
			BillItem* first_item;
			BillItem* last_item;
			float total_bill;
			ProductDirectory product_details;
		public:
			Bill(string);
			~Bill();
			void add_item();
			void print_bill();
	};
}
#endif
