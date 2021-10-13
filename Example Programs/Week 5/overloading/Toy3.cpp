#include<iostream>
#include<string> // We don't need it, but still, for better reading...
#include "Toy3.h"

using std::string;
using std::cout;
using std::endl;

namespace example
{
	int Toy3::counter = 1;

	void Toy3::reset_counter()
	{
		counter = 1;
	}

	Toy3::Toy3(string s, int i)
	{
		id = counter++;
		name = s;
		price = i;
	}

	Toy3::Toy3(Toy3& copy)
	{
		id = copy.id;
		name = copy.name;
		price = copy.price;
	}

	void Toy3::start_playing()
	{
		cout<<"You are now playing with "<<name<<" with id "<<id<<endl;
	}

	void Toy3::stop_playing()
	{
		cout<<"The "<<name<<" with id "<<id<<" is lying idle"<<endl;
	}

	string Toy3::get_name()
	{
		return name;
	}

	int Toy3::get_price()
	{
		return price;
	}

	void Toy3::set_price(int i)
	{
		price = i;
	}

	int Toy3::get_id()
	{
		return id;
	}

	Toy3& Toy3::operator >(Toy3& other_toy)
	{
		return other_toy.get_price() > get_price() ?
			other_toy : *this;
	}
}
