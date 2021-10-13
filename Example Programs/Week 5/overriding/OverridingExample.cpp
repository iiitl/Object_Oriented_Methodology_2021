#include<iostream>
#include "base.h"
#include "derived.h"

using std::cout;
using std::endl;
using example::base;
using example::derived;

int main()
{
	base b;
	derived d;

	base* bp = NULL;
	derived* dp = NULL;	

	cout<<"#########################################"<<endl;
	cout<<"Invoking methods directly with objects:"<<endl;
	cout<<"---------------------------------------"<<endl;
	cout<<"Invoking b.non_virtual_method()"<<endl;
	b.non_virtual_method();
	cout<<"Invoking b.virtual_method()"<<endl;
	b.virtual_method();
	cout<<"-----------------------------------------"<<endl;
	cout<<"Invoking d.non_virtual_method()"<<endl;
	d.non_virtual_method();
	cout<<"Invoking d.virtual_method()"<<endl;
	d.virtual_method();
	cout<<"#########################################"<<endl;

	cout<<endl;

	cout<<"#########################################"<<endl;
	cout<<"Invoking methods via pointers:"<<endl;
	cout<<"---------------------------------------"<<endl;
	bp = &d;
	dp = &d;
	cout<<"Invoking bp->non_virtual_method()"<<endl;
	bp->non_virtual_method();
	cout<<"Invoking bp->virtual_method()"<<endl;
	bp->virtual_method();
	cout<<"Invoking dp->non_virtual_method()"<<endl;
	dp->non_virtual_method();
	cout<<"Invoking dp->virtual_method()"<<endl;
	dp->virtual_method();
	cout<<"#########################################"<<endl;
}
