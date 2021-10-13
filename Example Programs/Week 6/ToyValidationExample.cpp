#include<iostream>
#include "Toy2.h"
#include "ToyValidator.h"

using std::cout;
using std::endl;
using example::Toy2;
using example::ToyValidator;

int main()
{
	ToyValidator v;
	Toy2* toy_ptr = NULL;
	try
	{
		toy_ptr = v.create_after_validation("", 399);
		if(toy_ptr == NULL)
			throw(v);
		cout<<"A new toy created successfully !!"<<endl;
		delete toy_ptr;
	}
	catch(ToyValidator v)
	{
		cout<<"Could not create a new toy; Reason: "<<v.get_message()<<endl;
	}
	return 0;
}
