#include<iostream>
#include "Compressor.h"

using std::cout;
using std::endl;

namespace example
{
	Compressor::Compressor(float capacity)
	{
		this->capacity = capacity;
	}

	Compressor::Compressor(Compressor& compressor)
	{
		this->capacity = compressor.capacity;
	}

	void Compressor::switch_on()
	{
		cout<<"Compressor state - ON"<<endl;
	}

	void Compressor::switch_off()
	{
		cout<<"Compressor state - OFF"<<endl;
	}
}
