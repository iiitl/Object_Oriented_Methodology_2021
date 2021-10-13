#include<iostream>
#include<iomanip>
#include<string>
#include "Bill.h"
#include "BillItem.h"
#include "ProductDirectory.h"

using std::string;
using std::to_string;
using std::fixed;
using std::setw;
using std::left;
using std::stoi;
using std::cout;
using std::cin;
using std::endl;

namespace example
{
	Bill::Bill(string mobile_number):product_details(PRODUCT_DETAILS_FILE)
	{
		this->mobile_number = mobile_number;
		first_item = last_item = NULL;
		total_bill = 0;
	}

	Bill::~Bill()
	{
		while(first_item != NULL)
		{
			BillItem* temp = first_item;
			first_item = first_item->get_next_item();
			delete temp;
		}
	}

	void Bill::add_item()
	{
		string item_code;
		string quantity_str;
		cout<<"Item Code: ";
		cin>>item_code;
		cout<<"Quantity: ";
		cin>>quantity_str;
		// Get the rate string
		string rate_str = product_details.get_product_rate(item_code);
		int index = rate_str.find("/");
		BillItem* temp = NULL;
		if(index == string::npos)
		{
			int number_of_items = stoi(quantity_str);
			float rate_per_item = stof(rate_str);
			temp = new BillItem(item_code, number_of_items, rate_per_item);
		}
		else
		{
			float amount_of_item = stof(quantity_str);
			string unit = rate_str.substr(index+1);
			float rate_per_unit = stof(rate_str.substr(0, index));
			temp = new BillItem(item_code, amount_of_item, unit, rate_per_unit);
		}
		temp->set_next_item(NULL);
		if(first_item == NULL)
			first_item = last_item = temp;
		else
		{
			last_item->set_next_item(temp);
			last_item = temp;
		}
		cout<<"Item added to the bill"<<endl;
	}

	void Bill::print_bill()
	{
		if(first_item == NULL)
		{
			cout<<"There are no items in the bill"<<endl;
			return;
		}
		cout<<"Mobile: "<<mobile_number<<endl;
		int ctr = 0;
		BillItem* temp = first_item;
		float total = 0;
		do
		{
			cout<<left<<setw(5)<<to_string(++ctr)+".";
			cout<<temp->get_item_representation()<<endl;
			total += temp->get_item_price();
			temp = temp->get_next_item();
		}
		while(temp != NULL);
		cout.precision(2);
		cout<<"Total Amount Due: "<<fixed<<setw(10)<<total<<endl;
	}
}
