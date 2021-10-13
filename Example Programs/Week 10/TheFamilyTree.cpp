#include<iostream>
#include<unistd.h>

using std::cout;
using std::endl;

int main()
{
	cout<<"Let us create a Process Family Tree"<<endl;
	cout<<"I am the L1 Process (Pid: "<<getpid()<<")"<<endl;
	
	if(!fork())
	{
		cout<<"I am the first L2 Process (Pid: "<<getpid()<<")"<<endl;
		if(!fork())
			cout<<"I am the third L3 Process (Pid: "<<getpid()<<")"<<endl;
		else
		{
			if(!fork())
				cout<<"I am the fourth L3 Process (Pid: "<<getpid()<<")"<<endl;
		}
	}
	else
	{
		if(!fork())
		{
			cout<<"I am the second L2 Process (Pid: "<<getpid()<<")"<<endl;
			if(!fork())
				cout<<"I am the first L3 Process (Pid: "<<getpid()<<")"<<endl;
			else
			{
				if(!fork())
					cout<<"I am the second L3 Process (Pid: "<<getpid()<<")"<<endl;
			}
		}
	}

	return 0;
		
}
