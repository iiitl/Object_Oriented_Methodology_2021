#include<iomanip>
#include<iostream>
#include<fstream>
#include "Toy2.h"
#include "ToyPamphlet.h"

using std::ios;
using std::ifstream;
using std::ofstream;
using std::ostream;
using std::endl;
using std::setiosflags;
using std::setw;
using std::fixed;
using std::cout;
using std::cerr;

namespace example
{
	ToyPamphlet::ToyPamphlet(int max_number_of_toys)
	{
		this->max_number_of_toys = max_number_of_toys;
		list_of_toys = new Toy2*[max_number_of_toys];
		number_of_toys = 0;

		if(!list_of_toys)
		{
			cerr<<"Memory Shortage. Aborting...";
			exit(1);
		}
	}

	ToyPamphlet::~ToyPamphlet()
	{
		if(list_of_toys)
		{
			delete[] list_of_toys;
		}
	}

	void ToyPamphlet::add_toy_to_pamphlet(Toy2& toy)
	{
		if(number_of_toys == max_number_of_toys)
			cerr<<"The pamphlet is full, cannot add more toys";
		else
			list_of_toys[number_of_toys++] = &toy;
	}

	void ToyPamphlet::print_stored_pamphlet(string file)
	{
		ifstream in(file);
		if(!in)
		{
			cerr<<"Cannot open file <"<<file<<"> for reading"<<endl;
			return;
		}
		while(!in.eof())
		{
			char buffer[81];
			in.getline(buffer, 80);
			cout<<buffer<<endl;
		}
		in.close();
	}

	void ToyPamphlet::generate_pamphlet()
	{
		generate_pamphlet(cout);
	}

	void ToyPamphlet::generate_pamphlet(ostream& out)
	{
		if(number_of_toys == 0)
		{
			out<<"We do not have any toys right now in the store !!"<<endl;
			return;
		}

		out<<"### The Toy Pamplet ###"<<endl;

		out.precision(2);
		out.width(8);
		out.fill('*');
		
		for(int i = 0; i < number_of_toys; i++)
		{
			out<<std::setiosflags(ios::left)<<setw(50)<<list_of_toys[i]->get_name();
			out<<"MRP: Rs "<<fixed<<(float)list_of_toys[i]->get_price()<<endl;
		}
	}
	
	void ToyPamphlet::generate_pamphlet_in_file(string file)
	{
		ofstream fout(file);
		if(fout)
			generate_pamphlet(fout);
		else
			cerr<<"Cannot create file <"<<file<<"> for writing"<<endl;
	}
}
