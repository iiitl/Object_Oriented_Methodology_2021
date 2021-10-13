#include<iostream>
#include<string>

#include "ToyValidator.h"
#include "Toy2.h"

using std::string;
using example::ToyValidator;
using example::Toy2;

namespace example
{
	Toy2* ToyValidator::create_after_validation(string name, int price)
	{
		Toy2* temp = NULL;
		try
		{
			check(name, price);
			temp = new Toy2(name, price);
		}
		catch(string m)
		{
			message = m;
		}

		return temp;
	}

	void ToyValidator::check(string name, int price)
	{
		message = "validation succeeded";

		if(name.length() == 0)
			throw((string)"name cannot be empty");
		if(price < 0)
			throw((string)"price cannot be negative");
	}

	string ToyValidator::get_message()
	{
		return message;
	}
}
