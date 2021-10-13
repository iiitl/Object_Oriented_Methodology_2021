#include<iostream>
#include<string>
#include "Toy2.h"
#include "BatteryOperatedToy2.h"
#include "ToyDemonstrator2.h"
#include<pthread.h>
#include<unistd.h>

using std::cout;
using std::endl;

namespace example
{
	void ToyDemonstrator2::show_demo(Toy2& toy)
	{
		cout<<"Let's play with "<<toy.get_name()<<endl;
		toy.start_playing();
		cout<<"I guess it's enough :P"<<endl;
		toy.stop_playing();
	}

	void ToyDemonstrator2::show_demo(BatteryOperatedToy2& toy, 
			string battery_type, int number_of_batteries)
	{
		cout<<"I need to put some batteries in it first !!"<<endl;
		toy.put_batteries(battery_type, number_of_batteries);
		show_demo(toy);
		cout<<"Let me take the batteries out..."<<endl;
		toy.take_out_all_batteries();
	}

	void* ToyDemonstrator2::show_independent_demo(void* toy_ptr)
	{
		Toy2 toy = *((Toy2*) toy_ptr);
		cout<<"["<<pthread_self()<<"] Let's play with "<<toy.get_name()<<endl;
		toy.start_playing();
		sleep(5);
		cout<<"["<<pthread_self()<<"] I guess it's enough :P"<<endl;
		toy.stop_playing();
		return (void*) pthread_self();
	}

	void ToyDemonstrator2::show_multiple_demos(Toy2& toy1, Toy2& toy2)
	{
		pthread_t t_id1, t_id2;

		if(pthread_create(&t_id1, NULL, &ToyDemonstrator2::show_independent_demo, (void*) &toy1))
			cout<<"Could not show demo for "<<toy1.get_name()<<endl;
		else
			cout<<"Spawned a thread with id "<<t_id1<<" to show demo for "<<toy1.get_name()<<endl;

		if(pthread_create(&t_id2, NULL, &ToyDemonstrator2::show_independent_demo, (void*) &toy2))
			cout<<"Could not show demo for "<<toy2.get_name()<<endl;
		else
			cout<<"Spawned a thread with id "<<t_id2<<" to show demo for "<<toy2.get_name()<<endl;

		cout<<"This is the main thread. My thread id is "<<pthread_self()<<"."<<endl;
		cout<<"I will wait for other threads to complete !!"<<endl;
		pthread_exit(NULL);
	}
}
