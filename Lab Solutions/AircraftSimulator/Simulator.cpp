#include<iostream>
#include<string>
#include<chrono>
#include<thread>
#include "Aircraft.h"
#include "X.h"
#include "Y.h"
#include "Z.h"

using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::string;
using std::this_thread::sleep_for;
using std::chrono::milliseconds;
using example::Aircraft;
using example::X;
using example::Y;
using example::Z;

void run_simulator(Aircraft* aircraft)
{
	int choice;
	int failures;
	do
	{
		failures = 0;
		cout<<"What would you like to do?"<<endl;
		cout<<"1. Operate Engines"<<endl;
		cout<<"2. Check for Passenger Load"<<endl;
		cout<<"3. Check status for common parts"<<endl;
		cout<<"4. Exit"<<endl;
		cout<<"Provide your choice: ";
		cin>>choice;
		cout<<"-----------------------------------------------------------"<<endl;
		switch(choice)
		{
			case 1:
				cout<<"1. Switch on an engine"<<endl;
				cout<<"2. Switch off an engine"<<endl;
				cout<<"Pick your choice: ";
				cin>>choice;
				if(choice == 1)
					aircraft->switch_on_engine();
				else if(choice == 2)
					aircraft->switch_off_engine();
				else
					cout<<"Sorry... that wasn't a valid choice !!"<<endl;
				break;
			case 2:
				int load;
				cout<<"Enter the number of passengers on-board: ";
				cin>>load;
				if(aircraft->is_acceptable_load(load))
					cout<<"Ready to fly :-)"<<endl;
				else
					cout<<"Oops... too much load"<<endl;
				break;
			case 3:
				cout<<"Let me check..."<<endl;
				for(int i = 0; i < 100; i++)
				{

					if(aircraft->check_common_parts())
						cout<<"*";
					else
					{
						cout<<"!";
						failures++;
					}
					if(i%10 == 9)
						cout<<endl;
					sleep_for(milliseconds(100));
				}
				cout<<"Failure Rate: "<<failures<<"%"<<endl;
				break;
			case 4:
				exit(0);
			default:
				cout<<"Invalid choice... try again...";
		}
		cout<<"-----------------------------------------------------------"<<endl;
		cout<<endl<<endl;
	}
	while(1);
}

int main()
{
	string input;
	cout<<"Starting the Simulator ..."<<endl;
	cout<<"Aircraft Type: (X/Y/Z): ";
	getline(cin, input);
	Aircraft* aircraft;
	if(input == "X" || input == "x")
		aircraft = new X();
	else if(input == "Y" || input == "y")
		aircraft = new Y();
	else if(input == "Z" || input == "z")
		aircraft = new Z();
	else
	{
		cerr<<"Invalid aircraft... aborting ..."<<endl;
		exit(1);
	}
	run_simulator(aircraft);
	return 0;
}
