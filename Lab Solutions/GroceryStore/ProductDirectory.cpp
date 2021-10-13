#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
#include<cmath>
#include "ProductDirectory.h"

using std::ifstream;
using std::exception;
using std::string;
using std::stoi;
using std::cerr;
using std::endl;
using std::size_t;
using std::invalid_argument;
using std::ceil;
using std::log10;

namespace example
{

	ProductDirectory::ProductDirectory(string product_file)
	{
		number_of_products = 0;
		int delimeter_length = strlen(DETAILS_DELIMITER);
		ifstream in(product_file);
		if(!in)
		{
			cerr<<"Cannot open products file "<<product_file<<" for reading"<<endl;
			return;
		}
		
		char buffer[MAX_CHARS_IN_DEFINITION_LINE+1];
		while(!in.eof())
		{
			memset(buffer, 0, MAX_CHARS_IN_DEFINITION_LINE);
			in.getline(buffer, MAX_CHARS_IN_DEFINITION_LINE);
			int len = strlen(buffer);
			if(len == 0)
				break;
			string product_detail(buffer, len);
			size_t index = product_detail.find(DETAILS_DELIMITER);
			try
			{
				if(index == string::npos)
					throw exception();
				else
				{
					int base = stoi(product_detail.substr(0, index));
					string rate_str = product_detail.substr(index + delimeter_length, len - delimeter_length);
					// Check if the rate has the UNIT_SPECIFIER
					index = rate_str.find(UNITS_SPECIFIER);
					if(index == string::npos) // Then the string must be a real number
						stof(rate_str); // This "must not" throw an exception
					else // The string before UNIT_SPECIFIER must be a real number
						stof(rate_str.substr(0, index)); // This "must not" throw an exception

					// It is a valid rate string
					base_code[number_of_products] = base;
					if(index == string::npos)
						product_rate[number_of_products] = rate_str;
					else
						product_rate[number_of_products] = rate_str.replace(index, strlen(UNITS_SPECIFIER), "/");
				}
			}
			catch(exception e)
			{
				cerr<<"[Line#"<<number_of_products+1<<"]: Invalid Product Details"<<endl;
			}
			number_of_products++;
		}
		in.close();
	}

	string ProductDirectory::get_product_rate(string product_code)
	{
		// Find the first n digits of product code
		// Here, n is the minimum number of digits required to represent the base codes
		int n = (int) ceil(log10(MAX_NUMBER_OF_PRODUCTS+1));
		int product_code_base = stoi(product_code.substr(0, n));
		for(int i = 0; i < number_of_products; i++)
			if(base_code[i] == product_code_base)
				return product_rate[i];
		throw invalid_argument(product_code);
	}
}
