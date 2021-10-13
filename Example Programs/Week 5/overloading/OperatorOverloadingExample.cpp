#include<iostream>
#include "Toy3.h"

using std::cout;
using std::endl;
using example::Toy3;

int main()
{
	Toy3 t1("Blocks", 399);
        Toy3 t2("Rings", 499);
	Toy3 t3("Guitar", 349);
	cout<<"We have these toys with us:"<<endl;
	cout<<"1. "<<t1.get_name()<<" (Rs "<<t1.get_price()<<")"<<endl;
	cout<<"2. "<<t2.get_name()<<" (Rs "<<t2.get_price()<<")"<<endl;
	cout<<"2. "<<t3.get_name()<<" (Rs "<<t3.get_price()<<")"<<endl;
	Toy3 t4 = t1>t2>t3;
	cout<<"The costliest toy is "<<t4.get_name()<<endl;
	t4 = t1<t2<t3;
	cout<<"The cheapest toy is "<<t4.get_name()<<endl;
}
