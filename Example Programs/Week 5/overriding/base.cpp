#include<iostream>
#include "base.h"

using std::cout;
using std::endl;

namespace example
{
	void base::non_virtual_method()
	{
		cout<<"base::non_virtual_method() invoked"<<endl;
	}

	void base::virtual_method()
	{
		cout<<"base::virtual_method() invoked"<<endl;
	}
}
