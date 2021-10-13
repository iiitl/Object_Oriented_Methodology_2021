#ifndef __ProductDirectory
#define __ProductDirectory

#include<string>

#define MAX_NUMBER_OF_PRODUCTS 100
#define PRODUCT_DETAILS_FILE "products.txt"
#define MAX_CHARS_IN_DEFINITION_LINE 100
#define DETAILS_DELIMITER " | "
#define UNITS_SPECIFIER " per "

using std::string;

namespace example
{
	class ProductDirectory
	{
		private:
			int base_code[MAX_NUMBER_OF_PRODUCTS];
			string product_rate[MAX_NUMBER_OF_PRODUCTS];
			int number_of_products;
		public:
			ProductDirectory(string);
			string get_product_rate(string);
	};
}

#endif
