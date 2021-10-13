#include<iostream>
#include "derived.h"

using std::cout;
using std::endl;

namespace example
{
	void derived::non_virtual_method()
	{
		cout<<"derived::non_virtual_method() invoked"<<endl;
	}

	void derived::virtual_method()
	{
		cout<<"derived::virtual_method() invoked"<<endl;
	}
}
