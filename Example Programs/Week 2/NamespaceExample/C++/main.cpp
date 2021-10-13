#include<iostream>

#include "add.h"
#include "multiply.h"

int main()
{
	int i = 5, j = 10, k = 20;
	std::cout<<"i + j = "<<add_ns::add(i, j)<<"\n";
	std::cout<<"i + j + k = "<<add_ns::add_to_result(k)<<"\n";
	std::cout<<"i * j = "<<multiply_ns::multiply(i, j)<<"\n";
	std::cout<<"i * j * k = "<<multiply_ns::multiply_with_result(k)<<"\n";
}
