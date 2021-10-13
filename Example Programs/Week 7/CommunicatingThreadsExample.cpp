#include<iostream>
#include<string>
#include<pthread.h>
#include<unistd.h>
#include "Toy2.h"
#include "BatteryOperatedToy2.h"
#include "ToyDemonstrator2.h"

using std::cout;
using std::endl;
using example::Toy2;
using example::BatteryOperatedToy2;
using example::ToyDemonstrator2;

pthread_t active_thread_id;

void* show_toy_demo_exclusively(void* data)
{
	while(pthread_self() != active_thread_id)	// Wait for some time
		sleep(1);
	return ToyDemonstrator2::show_independent_demo(data);
}

int main()
{
	pthread_t t_id1, t_id2;
	Toy2 t1("Blocks", 399);
	Toy2 t2("Rings", 399);
	cout<<"Showing demo for two toys, but one after another"<<endl;
	if(pthread_create(&t_id1, NULL, show_toy_demo_exclusively, (void*) &t1))
		cout<<"Could not show demo for "<<t1.get_name()<<endl;
	else
	{
		cout<<"Spawned a thread with id "<<t_id1<<" to show demo for "<<t2.get_name()<<endl;
		active_thread_id = t_id1;
		if(pthread_create(&t_id2, NULL, show_toy_demo_exclusively, (void*) &t2))
			cout<<"Could not show demo for "<<t2.get_name()<<endl;
		else
			cout<<"Spawned a thread with id "<<t_id1<<" to show demo for "<<t2.get_name()<<endl;
		pthread_join(t_id1, NULL);
		active_thread_id = t_id2;
	}
	pthread_exit(NULL);
	return 0;
}
