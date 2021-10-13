#include<iostream>
#include<string> // We don't need it, but still, for better reading...
#include "Toy2.h"

using std::string;
using std::cout;
using std::endl;

namespace example
{
	int Toy2::counter = 1;

	void Toy2::reset_counter()
	{
		counter = 1;
	}

	Toy2::Toy2(string s, int i)
	{
		id = counter++;
		name = s;
		price = i;
		cout<<"Creating a new "<<name<<" with id "<<id<<endl;
	}

	Toy2::Toy2(Toy2& copy)
	{
		id = copy.id;
		name = copy.name;
		price = copy.price;
		cout<<"Creating a copy of "<<name<<" with id "<<id<<endl;
	}

	Toy2::~Toy2()
	{
		cout<<"Destroying the "<<name<<" with id "<<id<<endl;
	}

	void Toy2::start_playing()
	{
		cout<<"You are now playing with "<<name<<" with id "<<id<<endl;
	}

	void Toy2::stop_playing()
	{
		cout<<"The "<<name<<" with id "<<id<<" is lying idle"<<endl;
	}

	string Toy2::get_name()
	{
		return name;
	}

	int Toy2::get_price()
	{
		return price;
	}

	void Toy2::set_price(int i)
	{
		price = i;
	}

	int Toy2::get_id()
	{
		return id;
	}
}
