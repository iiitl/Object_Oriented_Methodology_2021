#include<string>
#include<sstream>
#include<iomanip>
#include "BillItem.h"
#include "Quantity.h"
#include "UncountableQuantity.h"
#include "CountableQuantity.h"

using std::string;
using std::left;
using std::right;
using std::fixed;
using std::setw;
using std::ostringstream;

namespace example
{
	BillItem::BillItem(string item_code, float amount_of_item, string unit, float rate_per_unit)
	{
		this->item_code = item_code;
		product_quantity = new UncountableQuantity(amount_of_item, unit, rate_per_unit);
		next = NULL;
	}

	BillItem::BillItem(string item_code, int number_of_items, float rate_per_item)
	{
		this->item_code = item_code;
		product_quantity = new CountableQuantity(number_of_items, rate_per_item);
		next = NULL;
	}

	BillItem::~BillItem()
	{
		delete product_quantity;
	}

	float BillItem::get_item_price()
	{
		return product_quantity->get_total();
	}

	string BillItem::get_item_representation()
	{
		ostringstream sout;
		sout.precision(2);
		sout.fill('*');
		sout<<left<<setw(10)<<item_code<<" ";
		sout.fill(' ');
		sout<<setw(15)<<product_quantity->get_rate_str();
		sout<<setw(8)<<product_quantity->get_quantity_str();
		sout<<right<<setw(12)<<fixed<<product_quantity->get_total();
		return sout.str();
	}

	BillItem* BillItem::get_next_item()
	{
		return next;
	}

	void BillItem::set_next_item(BillItem* next)
	{
		this->next = next;
	}
}
