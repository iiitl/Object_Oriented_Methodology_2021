#include<iostream>
#include<string> // We don't need it, but still, for better reading...
#include "Toy.h"

using std::string;
using std::cout;
using std::endl;

namespace example
{
	int Toy::counter = 1;

	Toy::Toy(string s, int i)
	{
		id = counter++;
		name = s;
		price = i;
		cout<<"Creating a new "<<name<<" with id "<<id<<endl;
	}

	Toy::~Toy()
	{
		cout<<"Destroying the "<<name<<" with id "<<id<<endl;
	}

	void Toy::start_playing()
	{
		cout<<"You are now playing with "<<name<<" with id "<<id<<endl;
	}

	void Toy::stop_playing()
	{
		cout<<"The "<<name<<" with id "<<id<<" is lying idle"<<endl;
	}

	string Toy::get_name()
	{
		return name;
	}

	int Toy::get_price()
	{
		return price;
	}

	void Toy::set_price(int i)
	{
		price = i;
	}

	int Toy::get_id()
	{
		return id;
	}
}
